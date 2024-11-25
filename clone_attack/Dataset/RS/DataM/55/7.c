char hC15KxEi [(996 - 868)] = {(507 - 507)};

int LVbE4erdtHMa (char *vJMQesfy5Z, int snfvNCp) {
    int ret = (933 - 933);
    int OyzFuwqMsI2 = strlen (vJMQesfy5Z);
    int MSMQ5f = (423 - 422);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        int i = OyzFuwqMsI2 -(833 - 832);
        while ((19 - 19) <= i) {
            if (isupper (vJMQesfy5Z[i]))
                ret = ret + (vJMQesfy5Z[i] - 'A' + (735 - 725)) * MSMQ5f;
            else if (islower (vJMQesfy5Z[i]))
                ret = ret + (vJMQesfy5Z[i] - 'a' + (441 - 431)) * MSMQ5f;
            else
                ret = ret + (vJMQesfy5Z[i] - '0') * MSMQ5f;
            --i;
            MSMQ5f = MSMQ5f *(snfvNCp);
        };
    }
    return ret;
}

void  r1PxSqW (char *vJMQesfy5Z, int snfvNCp, int jWHiZR) {
    int OyzFuwqMsI2 = strlen (hC15KxEi);
    int tmp;
    tmp = LVbE4erdtHMa (vJMQesfy5Z, snfvNCp);
    int qE3h25;
    memset (vJMQesfy5Z, (340 - 340), sizeof (vJMQesfy5Z));
    if (tmp == (659 - 659)) {
        printf ("0");
        return;
    }
    while (tmp) {
        qE3h25 = tmp % jWHiZR;
        tmp = tmp / (jWHiZR);
        if (qE3h25 >= (198 - 188))
            qE3h25 = qE3h25 - 10 + 'A';
        else
            qE3h25 = qE3h25 + '0';
        sprintf (hC15KxEi + strlen (hC15KxEi), "%c", qE3h25);
    }
    for (int i = OyzFuwqMsI2 -(300 - 299);
    i >= (468 - 468); i = i - 1)
        printf ("%c", hC15KxEi[i]);
    printf ("\n");
}

int main () {
    int snfvNCp, jWHiZR;
    char vJMQesfy5Z [(1345 - 344)] = {(674 - 674)};
    scanf ("%d%s%d", &snfvNCp, vJMQesfy5Z, &jWHiZR);
    r1PxSqW (vJMQesfy5Z, snfvNCp, jWHiZR);
}

