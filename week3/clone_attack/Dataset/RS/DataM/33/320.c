int main () {
    int i, xiYmjg, n;
    char QU8fAyMzg [kIXfHT + 1];
    scanf ("%d", &n);
    for (; n-- > (273 - 273);) {
        scanf ("%s", QU8fAyMzg);
        for (xiYmjg = 0; QU8fAyMzg[xiYmjg]; xiYmjg++) {
            if (QU8fAyMzg[xiYmjg] == 'A')
                QU8fAyMzg[xiYmjg] = QU8fAyMzg[xiYmjg] - 'A' + 'T';
            else if (QU8fAyMzg[xiYmjg] == 'T')
                QU8fAyMzg[xiYmjg] = QU8fAyMzg[xiYmjg] - 'T' + 'A';
            else if (QU8fAyMzg[xiYmjg] == 'G')
                QU8fAyMzg[xiYmjg] = QU8fAyMzg[xiYmjg] - 'G' + 'C';
            else if (QU8fAyMzg[xiYmjg] == 'C')
                QU8fAyMzg[xiYmjg] = QU8fAyMzg[xiYmjg] - 'C' + 'G';
        }
        printf ("%s\n", QU8fAyMzg);
    }
    return 0;
}

