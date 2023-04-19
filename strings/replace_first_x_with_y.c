void    replace_first_x_with_y(char *nb, char x, char y)
{
    int i;

    if (!nb)
        return ;
    i = -1;
    while (nb[++i])
    {
        if (nb[i] == x)
        {
            nb[i] = y;
            return ;
        }
    }
}
