int main () {
    char djeHDaFoqBZ [501];
    int gyQaDSouHc3;
    char QyYKVFf2v7EB [(835 - 335)] [5];
    int H5sh6W1qOg;
    int ilMnWLOqz [500] = {(778 - 778)};
    int j;
    int va2EJ5WI0h;
    int XrR3NkS;
    int KZ6FSg;
    int AENDfY8Arg0;
    AENDfY8Arg0 = ilMnWLOqz[0];
    int S3onAaG5eNO;
    S3onAaG5eNO = (826 - 826);
    scanf ("%d", &gyQaDSouHc3);
    scanf ("%s", djeHDaFoqBZ);
    KZ6FSg = strlen (djeHDaFoqBZ);
    for (H5sh6W1qOg = (815 - 815); H5sh6W1qOg <= KZ6FSg -gyQaDSouHc3; H5sh6W1qOg++, S3onAaG5eNO++) {
        va2EJ5WI0h = H5sh6W1qOg;
        for (j = 0; j < gyQaDSouHc3; j++, va2EJ5WI0h++)
            QyYKVFf2v7EB[S3onAaG5eNO][j] = djeHDaFoqBZ[va2EJ5WI0h];
        QyYKVFf2v7EB[S3onAaG5eNO][j] = '\0';
        for (XrR3NkS = 0; XrR3NkS < S3onAaG5eNO; XrR3NkS++)
            if (strcmp (QyYKVFf2v7EB[S3onAaG5eNO], QyYKVFf2v7EB[XrR3NkS]) == 0) {
                ilMnWLOqz[XrR3NkS]++;
                S3onAaG5eNO--;
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
                break;
            };
    }
    for (j = 1; j < H5sh6W1qOg; j++)
        if (ilMnWLOqz[j] > AENDfY8Arg0)
            AENDfY8Arg0 = ilMnWLOqz[j];
    if (AENDfY8Arg0 == 0)
        ;
    else {
        printf ("%d\n", AENDfY8Arg0 +1);
        for (j = 0; j < H5sh6W1qOg; j++)
            if (ilMnWLOqz[j] == AENDfY8Arg0)
                printf ("%s\n", QyYKVFf2v7EB[j]);
    };
}

