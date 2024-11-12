int main () {
    char SQDn7lOfpob [128], mL35Sa7WXM [128];
    int o9cVDnueyz, DBPAhudt4a, OZEPN8, Vm8xCX, UnwBx3J5IXa, k;
    scanf ("%d", &o9cVDnueyz);
    {
        Vm8xCX = 0;
        while (Vm8xCX < o9cVDnueyz) {
            scanf ("%s", SQDn7lOfpob);
            DBPAhudt4a = strlen (SQDn7lOfpob);
            scanf ("%s", mL35Sa7WXM);
            OZEPN8 = strlen (mL35Sa7WXM);
            {
                UnwBx3J5IXa = DBPAhudt4a;
                while ((DBPAhudt4a -UnwBx3J5IXa) < OZEPN8) {
                    if (mL35Sa7WXM[OZEPN8 -1 + UnwBx3J5IXa -DBPAhudt4a] <= SQDn7lOfpob[UnwBx3J5IXa -1])
                        SQDn7lOfpob[UnwBx3J5IXa -1] = SQDn7lOfpob[UnwBx3J5IXa -1] - mL35Sa7WXM[OZEPN8 +UnwBx3J5IXa-DBPAhudt4a-1] + 48;
                    else {
                        SQDn7lOfpob[UnwBx3J5IXa -1] = SQDn7lOfpob[UnwBx3J5IXa -1] + 10 - mL35Sa7WXM[OZEPN8 +UnwBx3J5IXa-DBPAhudt4a-1] + 48;
                        k = UnwBx3J5IXa -2;
                        while (!('0' != SQDn7lOfpob[k])) {
                            SQDn7lOfpob[k] = '9';
                            k = k - 1;
                        }
                        SQDn7lOfpob[k]--;
                    }
                    UnwBx3J5IXa = UnwBx3J5IXa -1;
                }
            }
            k = 0;
            while (SQDn7lOfpob[k] == '0')
                k = k + 1;
            for (; k < DBPAhudt4a; k++)
                putchar (SQDn7lOfpob[k]);
            putchar ('\n');
            Vm8xCX++;
        }
    }
    return 0;
}

