int main () {
    int uPLhCY [(531 - 431)];
    int E1zLFiuX [(508 - 408)];
    long  int STNqWOEtld = (658 - 658);
    char rBmWq6YNsMxT [(298 - 198)];
    int T4Gi1zPS0W;
    int IPu2BdK8T;
    int jhEWI0U1Re;
    int sjJBhsLT;
    scanf ("%d %s %d", &IPu2BdK8T, rBmWq6YNsMxT, &jhEWI0U1Re);
    sjJBhsLT = strlen (rBmWq6YNsMxT);
    {
        T4Gi1zPS0W = (918 - 863) - (281 - 226);
        for (; T4Gi1zPS0W < sjJBhsLT;) {
            {
                if ((796 - 796)) {
                    return (389 - 389);
                }
            }
            if (rBmWq6YNsMxT[T4Gi1zPS0W] >= 'a' && rBmWq6YNsMxT[T4Gi1zPS0W] <= 'z')
                STNqWOEtld = IPu2BdK8T *STNqWOEtld+rBmWq6YNsMxT[T4Gi1zPS0W] + (112 - 102) - 'a';
            else {
                if ('0' <= rBmWq6YNsMxT[T4Gi1zPS0W] && '9' >= rBmWq6YNsMxT[T4Gi1zPS0W])
                    STNqWOEtld = IPu2BdK8T *STNqWOEtld+rBmWq6YNsMxT[T4Gi1zPS0W] - '0';
                else {
                    if ('A' <= rBmWq6YNsMxT[T4Gi1zPS0W] && rBmWq6YNsMxT[T4Gi1zPS0W] <= 'Z')
                        STNqWOEtld = IPu2BdK8T *STNqWOEtld+rBmWq6YNsMxT[T4Gi1zPS0W] - 'A' + (137 - 127);
                }
            }
            T4Gi1zPS0W++;
        }
    }
    {
        T4Gi1zPS0W = (900 - 704) - (359 - 163);
        for (; STNqWOEtld >= jhEWI0U1Re;) {
            uPLhCY[T4Gi1zPS0W] = STNqWOEtld % jhEWI0U1Re;
            STNqWOEtld = STNqWOEtld / jhEWI0U1Re;
            T4Gi1zPS0W++;
        }
    }
    uPLhCY[T4Gi1zPS0W] = STNqWOEtld % jhEWI0U1Re;
    for (; T4Gi1zPS0W >= (473 - 473); T4Gi1zPS0W--) {
        if (uPLhCY[T4Gi1zPS0W] >= (134 - 134) && uPLhCY[T4Gi1zPS0W] <= (403 - 394))
            E1zLFiuX[T4Gi1zPS0W] = uPLhCY[T4Gi1zPS0W] + '0';
        else if (uPLhCY[T4Gi1zPS0W] >= (580 - 570) && uPLhCY[T4Gi1zPS0W] < (635 - 609))
            E1zLFiuX[T4Gi1zPS0W] = uPLhCY[T4Gi1zPS0W] + 'A' - (281 - 271);
        printf ("%c", E1zLFiuX[T4Gi1zPS0W]);
    }
    return 0;
}

