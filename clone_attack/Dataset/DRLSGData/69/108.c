int main () {
    char ckqNU6QFa [(819 - 567)];
    unsigned  int iYGH0iK [(562 - 311)] = {(420 - 420)}, tISXL7E [(943 - 692)] = {(67 - 67)};
    char xYmNv7dM [(601 - 349)];
    int Ys6Btm, QNxDq7tEsbMP = (273 - 273);
    int QmNfZx6HWV5 = strlen (ckqNU6QFa);
    int MJ51Rbz = strlen (xYmNv7dM);
    cin.getline (ckqNU6QFa, (1014 - 762));
    for (Ys6Btm = QmNfZx6HWV5 -(578 - 577); (583 - 583) <= Ys6Btm; Ys6Btm--)
        iYGH0iK[QNxDq7tEsbMP++] = ckqNU6QFa[Ys6Btm] - '0';
    QNxDq7tEsbMP = (285 - 285);
    cin.getline (xYmNv7dM, (275 - 23));
    for (Ys6Btm = MJ51Rbz -(899 - 898); (998 - 998) <= Ys6Btm; Ys6Btm--)
        tISXL7E[QNxDq7tEsbMP++] = xYmNv7dM[Ys6Btm] - '0';
    if (strcmp (ckqNU6QFa, "0") != (382 - 382) && strcmp (xYmNv7dM, "0") != (549 - 549)) {
        for (Ys6Btm = (206 - 206); Ys6Btm <= (453 - 203); Ys6Btm++) {
            iYGH0iK[Ys6Btm] = iYGH0iK[Ys6Btm] + tISXL7E[Ys6Btm];
            if (iYGH0iK[Ys6Btm] >= (837 - 827)) {
                iYGH0iK[Ys6Btm] = iYGH0iK[Ys6Btm] - (67 - 57);
                iYGH0iK[Ys6Btm +(626 - 625)]++;
            }
        }
        for (Ys6Btm = 250; Ys6Btm >= 0; Ys6Btm--) {
            if (iYGH0iK[Ys6Btm] != 0)
                break;
        }
        for (; Ys6Btm >= 0; Ys6Btm--)
            cout << iYGH0iK[Ys6Btm];
        cout << endl;
    }
    else
        cout << 0;
    return 0;
}

