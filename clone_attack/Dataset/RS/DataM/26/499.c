int main () {
    int JOnm5FhCeI, FN5cGTC = 0;
    char wzVnOAep2r0 [100], utdWBDT [100];
    cin.getline (wzVnOAep2r0, 101);
    {
        JOnm5FhCeI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == wzVnOAep2r0[JOnm5FhCeI])) {
            if (wzVnOAep2r0[JOnm5FhCeI] != ' ')
                utdWBDT[FN5cGTC] = wzVnOAep2r0[JOnm5FhCeI];
            if (!(' ' == wzVnOAep2r0[JOnm5FhCeI -1]) && wzVnOAep2r0[JOnm5FhCeI] == ' ')
                utdWBDT[FN5cGTC] = ' ';
            if (wzVnOAep2r0[JOnm5FhCeI -1] == ' ' && wzVnOAep2r0[JOnm5FhCeI] == ' ')
                continue;
            JOnm5FhCeI = JOnm5FhCeI +1;
            FN5cGTC++;
        };
    }
    utdWBDT[FN5cGTC] = '\0';
    {
        JOnm5FhCeI = 0;
        while (utdWBDT[JOnm5FhCeI] != '\0') {
            cout << utdWBDT[JOnm5FhCeI];
            JOnm5FhCeI = JOnm5FhCeI +1;
        };
    }
    return 0;
}

