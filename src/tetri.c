#include "../inc/fillit.h"

int     tetri_gauche(char **tetri)                          /* 26 lignes */
{
    int     i;
    int     j;
    int     cpt;
    char    **tmp;

    tmp = ft_2tabcpy(tetri);
    i = 0;
    cpt = 0;
    while ( i < 4)
    {
        j = 0;
        while (j < 4 && cpt < 3)
        {
            if (tmp[i][j] == '#')
            {
                cpt++;
                if ((i != 0 && tmp[i-1][j] != '.') || (i != 3 && tmp[i+1][j] != '.') ||
                        (j != 3 && tmp[i][j + 1] != '.') || (j != 0 && tmp[i][j - 1] != '.') || (cpt == 3 && tmp[i+1][j-1] != '.'))
                            tmp[i][j] = '.';
                else
                    return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}

int     tetri_droite(char **tetri)                              /* 26 lignes */
{
    int     i;
    int     j;
    int     cpt;
    char    **tmp;

    tmp = ft_2tabcpy(tetri);
    i = 0;
    cpt = 0;
    while ( i < 4)
    {
        j = 3;
        while (j > -1 && cpt < 3)
        {
            if (tmp[i][j] == '#')
            {
                cpt++;
                if ((i != 0 && tmp[i-1][j] != '.') || (i != 3 && tmp[i+1][j] != '.') ||
                    (j != 3 && tmp[i][j + 1] != '.') || (j != 0 && tmp[i][j - 1] != '.'))
                    tmp[i][j] = '.';
                else
                    return (0);
            }
            j--;
        }
        i++;
    }
    return (1);
}

int     test_tetri(char **tetri)
{
    int     i;
    int     j;

    i = 0;
    while ( i < 4)
    {
        j = 0;
        while (j < 4)
        {
            if (tetri[i][j] == '#')
            {
                if ((tetri[i][j + 1] == '#' && tetri[i + 1][j] == '#'))
                    return (0);
                else
                    return (1);
            }
            j++;
        }
        i++;
    }
    return (1);
}

int     valid_and_format(char ***tetris)
{
    int i;

    i = 0;
	while (tetris[i])
	{
            if (test_tetri(tetris[i]))
            {
                if(!tetri_gauche(tetris[i]))
                    return (0);
            }
            else if(!tetri_droite(tetris[i]))
                    return (0);
            tetris[i] = format_tetri(tetris[i], i);
            i++;
	}
	return (1);
}

char     ***get_tetri(const int fd, int nbtetris)
{
    char    ***tetris;
    int     i;
    int     j;
    char    *line;

    tetris = ft_tab2tabnew(nbtetris, 4, 4);
    line = ft_strnew(4);
    i = 0;
    while (tetris[i])
    {
        j = 0;
        while (j < 4)
        {
            get_next_line(fd, &line);
            tetris[i][j] = line;
            j++;
        }
        i++;
        get_next_line(fd, &line);
    }
    if (!valid_and_format(tetris))
        return (0);
    return (tetris);
}
