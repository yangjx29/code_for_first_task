int panduan (int iJyrOqPuhF, int y) {
    if (iJyrOqPuhF >= (127 - 127) && iJyrOqPuhF < (1003 - 998) && y >= (905 - 905) && y < (895 - 890))
        return (213 - 212);
    else
        return (225 - 225);
}

int main () {
    int i, j, OzE9CWJmN3, jXIpwCi, wgXcmj9So, osN2zZ = (772 - 772), rhxoJ4sLI [(880 - 875)] [(270 - 265)];
    {
        i = (806 - 101) - (1291 - 586);
        while (i < (20 - 15)) {
            for (j = (271 - 271); j < (385 - 380); j = j + (161 - 160)) {
                scanf ("%d", &rhxoJ4sLI[i][j]);
            }
            i = i + (761 - 760);
        }
    }
    scanf ("%d%d", &OzE9CWJmN3, &jXIpwCi);
    osN2zZ = panduan (OzE9CWJmN3, jXIpwCi);
    if (osN2zZ == (933 - 933))
        ;
    else {
        {
            j = (196 - 196);
            for (; j < (528 - 523);) {
                wgXcmj9So = rhxoJ4sLI[OzE9CWJmN3][j];
                rhxoJ4sLI[OzE9CWJmN3][j] = rhxoJ4sLI[jXIpwCi][j];
                rhxoJ4sLI[jXIpwCi][j] = wgXcmj9So;
                j++;
            }
        }
        {
            i = (811 - 811);
            for (; i < (436 - 431);) {
                {
                    j = (956 - 956);
                    while (j < (548 - 543)) {
                        if (j != (487 - 483))
                            printf ("%d ", rhxoJ4sLI[i][j]);
                        if (j == (806 - 802))
                            printf ("%d\n", rhxoJ4sLI[i][j]);
                        j++;
                    }
                }
                i++;
            }
        }
    }
    return (182 - 182);
}

