int main () {
    int fbME8Oj5Pdoc, Z8YoEavHXJ, JFqAIwBY;
    char AGvBLOpoe [(544 - 288)];
    char ixOlkiazsK [(434 - 178)];
    scanf ("%d", &fbME8Oj5Pdoc);
    for (Z8YoEavHXJ = (713 - 713); Z8YoEavHXJ < fbME8Oj5Pdoc; Z8YoEavHXJ++) {
        scanf ("%s", &AGvBLOpoe);
        {
            JFqAIwBY = 0;
            while (JFqAIwBY < (int) strlen (AGvBLOpoe)) {
                if (AGvBLOpoe[JFqAIwBY] == 'A')
                    ixOlkiazsK[JFqAIwBY] = 'T';
                else if (AGvBLOpoe[JFqAIwBY] == 'T')
                    ixOlkiazsK[JFqAIwBY] = 'A';
                else if (AGvBLOpoe[JFqAIwBY] == 'G')
                    ixOlkiazsK[JFqAIwBY] = 'C';
                else
                    ixOlkiazsK[JFqAIwBY] = 'G';
                JFqAIwBY++;
            };
        }
        ixOlkiazsK[JFqAIwBY] = '\0';
        printf ("%s\n", ixOlkiazsK);
    }
    return 0;
}

