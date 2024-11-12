struct   stud {
    int HpjneVTtJi;
    float abZqEF;
    float hxhMJjZp;
}
student [(100734 - 734)], pTh5SrtcBas;
int student_num;
float total [(100692 - 692)], t;

void  tOonGYx9N () {
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
        int eoNkpdvtHGc = (677 - 677);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((720 - 718) > eoNkpdvtHGc) {
            {
                int Qyc6qbd = (636 - 636);
                while ((192 - 190) - eoNkpdvtHGc > Qyc6qbd) {
                    if (total[Qyc6qbd] < total[Qyc6qbd +(316 - 315)]) {
                        t = total[Qyc6qbd];
                        pTh5SrtcBas = student[Qyc6qbd];
                        total[Qyc6qbd] = total[Qyc6qbd +(180 - 179)];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        total[Qyc6qbd +1] = t;
                        student[Qyc6qbd] = student[Qyc6qbd +1];
                        student[Qyc6qbd +1] = pTh5SrtcBas;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Qyc6qbd = Qyc6qbd +1;
                };
            }
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
            eoNkpdvtHGc = eoNkpdvtHGc + 1;
        };
    };
}

int main () {
    int eoNkpdvtHGc, Qyc6qbd;
    cin >> student_num;
    for (eoNkpdvtHGc = (143 - 143); student_num > eoNkpdvtHGc; eoNkpdvtHGc = eoNkpdvtHGc + 1) {
        cin >> student[eoNkpdvtHGc].HpjneVTtJi >> student[eoNkpdvtHGc].abZqEF >> student[eoNkpdvtHGc].hxhMJjZp;
        total[eoNkpdvtHGc] = student[eoNkpdvtHGc].abZqEF + student[eoNkpdvtHGc].hxhMJjZp;
    }
    {
        Qyc6qbd = 3;
        while (Qyc6qbd < student_num) {
            tOonGYx9N ();
            if (total[(200 - 198)] < total[Qyc6qbd]) {
                pTh5SrtcBas = student[(97 - 95)];
                t = total[(29 - 27)];
                total[2] = total[Qyc6qbd];
                student[2] = student[Qyc6qbd];
                total[Qyc6qbd] = t;
                student[Qyc6qbd] = pTh5SrtcBas;
            }
            Qyc6qbd = Qyc6qbd +1;
        };
    }
    {
        eoNkpdvtHGc = 0;
        while (eoNkpdvtHGc < 3) {
            cout << student[eoNkpdvtHGc].HpjneVTtJi << " " << total[eoNkpdvtHGc] << endl;
            eoNkpdvtHGc++;
        };
    }
    return 0;
}

