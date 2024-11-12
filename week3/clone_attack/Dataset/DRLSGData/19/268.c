int main () {
    int k;
    int eoCtIRT7d;
    char CnUYJ2DQ [4] [500];
    int j;
    int JH9ndW4 [3] = {0};
    int qbfwGEK;
    for (qbfwGEK = 0; 3 > qbfwGEK; qbfwGEK = qbfwGEK + 1) {
        cin.getline (CnUYJ2DQ[qbfwGEK], 500);
        JH9ndW4[qbfwGEK] = strlen (CnUYJ2DQ[qbfwGEK]);
    }
    eoCtIRT7d = 0;
    for (qbfwGEK = 0; CnUYJ2DQ[0][qbfwGEK] != 0; qbfwGEK++) {
        if ((!(0 != qbfwGEK) || (qbfwGEK > 0 && !(' ' != CnUYJ2DQ[0][qbfwGEK - 1]))) && ((!(' ' != CnUYJ2DQ[0][qbfwGEK + JH9ndW4[1]])) || (!(0 != CnUYJ2DQ[0][qbfwGEK + JH9ndW4[1]])))) {
            for (j = 0; JH9ndW4[1] > j; j++)
                if (CnUYJ2DQ[0][qbfwGEK + j] != CnUYJ2DQ[1][j])
                    break;
            if (!(JH9ndW4[1] != j)) {
                strcpy (CnUYJ2DQ[3], CnUYJ2DQ[0] + qbfwGEK + JH9ndW4[1]);
                strcpy (CnUYJ2DQ[0] + qbfwGEK + JH9ndW4[2], CnUYJ2DQ[3]);
                for (k = 0; CnUYJ2DQ[2][k] != 0; k++)
                    CnUYJ2DQ[0][qbfwGEK + k] = CnUYJ2DQ[2][k];
                eoCtIRT7d++;
            }
        }
        CnUYJ2DQ[0][JH9ndW4[0] + eoCtIRT7d * (JH9ndW4[2] - JH9ndW4[1]) + 1] = 0;
    }
    cout << CnUYJ2DQ[0] << endl;
    return 0;
}

