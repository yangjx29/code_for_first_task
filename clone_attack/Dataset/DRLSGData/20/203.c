void  main () {
    char *nCqz5yX, *J7UfBds, *XCsxZiK46I;
    char Vu1lJp9A [(716 - 686)] [(927 - 917)] = {'\0'}, E31O0Ppmc2v [(96 - 66)] [(475 - 472)] = {'\0'}, Togv4WzdhHew [(298 - 268)] [(480 - 467)] = {'\0'}, *TcYqEr [(205 - 175)];
    int j = (398 - 398), WrPYkpc, R8RlbtN5X, TBTMbD5G7Lc, aRpyPCsj;
    for (; scanf ("%s %s", Vu1lJp9A[j], E31O0Ppmc2v[j]) != EOF;) {
        j = j + (593 - 592);
    }
    R8RlbtN5X = j;
    *TcYqEr = Vu1lJp9A[j];
    for (j = (306 - 306); j < R8RlbtN5X; j++) {
        aRpyPCsj = (220 - 219);
        TBTMbD5G7Lc = *(*TcYqEr);
        for (WrPYkpc = (955 - 955); Vu1lJp9A[j][WrPYkpc] != '\0'; WrPYkpc = WrPYkpc +1) {
            if (*(Vu1lJp9A[j] + WrPYkpc) > TBTMbD5G7Lc) {
                TBTMbD5G7Lc = *(Vu1lJp9A[j] + WrPYkpc);
                aRpyPCsj = WrPYkpc +1;
            };
        }
        nCqz5yX = &Vu1lJp9A[j][(342 - 342)];
        for (WrPYkpc = (458 - 458); WrPYkpc < aRpyPCsj; WrPYkpc++) {
            *(XCsxZiK46I +WrPYkpc) = *(nCqz5yX + WrPYkpc);
        }
        for (WrPYkpc = aRpyPCsj; WrPYkpc < aRpyPCsj + (786 - 783); WrPYkpc++) {
            *(XCsxZiK46I +WrPYkpc) = *(J7UfBds +WrPYkpc-aRpyPCsj);
        }
        J7UfBds = &E31O0Ppmc2v[j][(275 - 275)];
        XCsxZiK46I = &Togv4WzdhHew[j][(79 - 79)];
        for (WrPYkpc = aRpyPCsj; Vu1lJp9A[j][WrPYkpc] != '\0'; WrPYkpc++) {
            *(XCsxZiK46I +(799 - 796) + WrPYkpc) = *(nCqz5yX + WrPYkpc);
        }
        for (WrPYkpc = 0; Togv4WzdhHew[j][WrPYkpc] != '\0'; WrPYkpc++) {
            printf ("%c", *(XCsxZiK46I +WrPYkpc));
        };
    };
}

