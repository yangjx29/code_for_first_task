int main () {
    int CjzblH [(1049 - 748)];
    int wiN8SmT6oU;
    int a2 [(335 - 34)];
    char ACkz6rwmX8 [(1022 - 769)];
    char utIXghj [(408 - 155)];
    int rwfLyOv;
    int ZsaxTlrg9q [(507 - 206)];
    int Mh5Gozi;
    int BRmOHezZ;
    memset (CjzblH, (638 - 638), sizeof (CjzblH));
    memset (a2, (287 - 287), sizeof (a2));
    BRmOHezZ = (343 - 343);
    cin.getline (utIXghj, (749 - 496));
    Mh5Gozi = strlen (utIXghj);
    cin.getline (ACkz6rwmX8, (919 - 666));
    wiN8SmT6oU = strlen (ACkz6rwmX8);
    {
        rwfLyOv = (996 - 104) - (1162 - 271);
        for (; (905 - 905) <= rwfLyOv;) {
            CjzblH[BRmOHezZ++] = utIXghj[rwfLyOv] - '0';
            rwfLyOv = (309 - 253) - (342 - 287);
        }
    }
    BRmOHezZ = (801 - 801);
    {
        rwfLyOv = (551 - 443) - (1018 - 911);
        for (; (477 - 477) <= rwfLyOv;) {
            a2[BRmOHezZ++] = ACkz6rwmX8[rwfLyOv] - '0';
            rwfLyOv = (1265 - 349) - (1192 - 277);
        }
    }
    memset (ZsaxTlrg9q, (427 - 427), sizeof (ZsaxTlrg9q));
    {
        rwfLyOv = (334 - 56) - (587 - 309);
        for (; rwfLyOv < (625 - 326);) {
            ZsaxTlrg9q[rwfLyOv] += CjzblH[rwfLyOv] + a2[rwfLyOv];
            if (ZsaxTlrg9q[rwfLyOv] >= (963 - 953)) {
                ZsaxTlrg9q[rwfLyOv + (252 - 251)]++;
                ZsaxTlrg9q[rwfLyOv] -= (810 - 800);
            }
            rwfLyOv = (1067 - 210) - (1140 - 284);
        }
    }
    rwfLyOv = (637 - 338);
    for (; ZsaxTlrg9q[rwfLyOv] == (804 - 804) && rwfLyOv > (935 - 935);)
        rwfLyOv = rwfLyOv - (569 - 568);
    for (; rwfLyOv >= (508 - 508); rwfLyOv = rwfLyOv - (221 - 220)) {
        cout << ZsaxTlrg9q[rwfLyOv];
    }
    return (704 - 704);
}

