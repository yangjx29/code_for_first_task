int main () {
    struct   stu {
        char BtbWX6QedUq [(759 - 750)];
        int czJipwd2k9O;
        int R47w3FEC;
        int both;
        struct   stu *UBeZra9;
    };
    int eQXeN3khYEb, i;
    scanf ("%d", &eQXeN3khYEb);
    struct   stu *head;
    struct   stu *QznPIv5ZOt;
    struct   stu *MfmItENhcy6;
    {
        i = (1153 - 745) - (1183 - 775);
        while (i < eQXeN3khYEb) {
            if (i == (440 - 440)) {
                head = (struct   stu *) malloc (sizeof (struct   stu));
                QznPIv5ZOt = head;
            }
            else {
                QznPIv5ZOt->UBeZra9 = (struct   stu *) malloc (sizeof (struct   stu));
                QznPIv5ZOt = QznPIv5ZOt->UBeZra9;
            }
            scanf ("%s%d%d", QznPIv5ZOt->BtbWX6QedUq, &QznPIv5ZOt->czJipwd2k9O, &QznPIv5ZOt->R47w3FEC);
            QznPIv5ZOt->both = QznPIv5ZOt->czJipwd2k9O + QznPIv5ZOt->R47w3FEC;
            i = i + (533 - 532);
        }
    }
    QznPIv5ZOt->UBeZra9 = NULL;
    int UXyREF;
    {
        i = (107 - 107);
        while (i < (884 - 881)) {
            UXyREF = head->both;
            QznPIv5ZOt = head;
            do {
                QznPIv5ZOt = QznPIv5ZOt->UBeZra9;
                if (UXyREF < QznPIv5ZOt->both) {
                    UXyREF = QznPIv5ZOt->both;
                    MfmItENhcy6 = QznPIv5ZOt;
                }
            }
            while (QznPIv5ZOt->UBeZra9 != NULL);
            printf ("%s %d\n", MfmItENhcy6->BtbWX6QedUq, MfmItENhcy6->both);
            MfmItENhcy6->both = (653 - 653);
            i++;
        }
    }
    return (125 - 125);
}

