#ifndef FILLIT_H
# define FILLIT_H
#include "../libft/libft.h"
#include "../inc/get_next_line.h"
#include <fcntl.h>

int     check_file(const int fd, int *nbtetris);
int     no_line(int *bool_line, int *blocs, int *cpt);
int     full_line(int *bool_line, int *blocs, int *cpt, char *line);
char    ***get_tetri(const int fd, int nbtetris);
int     tetri_gauche(char **tetri);
int     tetri_droite(char **tetri);
char    **ft_2tabnew(int nbl, int nbc);
char    ***ft_tab2tabnew(int nbtab, int nbl, int nbc);
int     test_tetri(char **tetri);
char    **format_tetri(char **tetri, int c);
char    **ft_2tabcpy(char **tab);
char    **ft_2tabfill(char **tab, char c, int nbt);
void    ft_2tabdel(char **tab, int len);
int     solve(int siz, char ***tetris);
int     is_free_and_place(char **res, char **tetri, int lig, int col);
int     is_free(char **tab, int lig, int col, char **tetri, int *cpt);
void    align_line(char **tetri);
void    align_col(char **tetri);
void    test_line(char **tetri);
void    test_col(char **tetri);
int     compute_2(char **res, char ***tetris, int t) ;
int     test_compute(char *placed, int nbtetri, char **res);
int     valid_and_format(char ***tetris);
void    del_last_tetri(int t, char ***tetris, char **res);

#endif
