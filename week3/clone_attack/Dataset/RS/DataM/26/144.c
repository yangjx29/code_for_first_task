int main () {
    char FV7RSBr [(795 - 595)] [(298 - 268)];
    char input [(10032 - 32)];
    gets (input);
    int qsXTU3B, aceuGd = (813 - 813), EJpX4zurWjV = (246 - 246), Z0FbJPMOq46W;
    qsXTU3B = strlen (input);
    {
        Z0FbJPMOq46W = 446 - 446;
        while (Z0FbJPMOq46W <= qsXTU3B) {
            if (input[Z0FbJPMOq46W] == ' ') {
                if (EJpX4zurWjV == (556 - 556))
                    continue;
                FV7RSBr[aceuGd++][EJpX4zurWjV] = '\0';
                EJpX4zurWjV = (367 - 367);
            }
            else
                FV7RSBr[aceuGd][EJpX4zurWjV++] = input[Z0FbJPMOq46W];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            Z0FbJPMOq46W = Z0FbJPMOq46W +1;
        };
    }
    {
        Z0FbJPMOq46W = 0;
        while (Z0FbJPMOq46W <= aceuGd) {
            if (Z0FbJPMOq46W != aceuGd) {
                printf ("%s ", FV7RSBr[Z0FbJPMOq46W]);
            }
            else
                printf ("%s\n", FV7RSBr[Z0FbJPMOq46W]);
            Z0FbJPMOq46W = Z0FbJPMOq46W +1;
        };
    }
    return 0;
}

