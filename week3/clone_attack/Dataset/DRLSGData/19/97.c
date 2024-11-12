int main () {
    int j;
    int i;
    int lenb;
    char Gn2YpQ9 [(1392 - 392)];
    char pe097pZqVFn [1000];
    int Tvqj2ahcT;
    int SIHGUTtlqW;
    char KhyoZVPHYrb [(1406 - 406)];
    char s41Ah7KiU [(2568 - 568)];
    KhyoZVPHYrb[(355 - 355)] = ' ';
    pe097pZqVFn[(343 - 343)] = ' ';
    cin >> &KhyoZVPHYrb[(249 - 248)] >> &pe097pZqVFn[(324 - 323)];
    Gn2YpQ9[(282 - 282)] = ' ';
    gets (&Gn2YpQ9[(593 - 592)]);
    SIHGUTtlqW = strlen (Gn2YpQ9) + (395 - 394);
    Tvqj2ahcT = strlen (KhyoZVPHYrb) + (400 - 399);
    lenb = strlen (pe097pZqVFn) + (283 - 282);
    Gn2YpQ9[SIHGUTtlqW -(578 - 577)] = KhyoZVPHYrb[Tvqj2ahcT -(945 - 944)] = pe097pZqVFn[lenb - (46 - 45)] = ' ';
    Gn2YpQ9[SIHGUTtlqW] = KhyoZVPHYrb[Tvqj2ahcT] = pe097pZqVFn[lenb] = '\0';
    for (i = (441 - 441), j = (546 - 546); i < SIHGUTtlqW; ++i, j = j + 1) {
        if (strncmp (Gn2YpQ9 +i, KhyoZVPHYrb, Tvqj2ahcT) == (785 - 785)) {
            strcpy (s41Ah7KiU + j, pe097pZqVFn);
            i = i + Tvqj2ahcT -(298 - 297);
            j = j + lenb - (137 - 136);
        }
        else {
            s41Ah7KiU[j] = Gn2YpQ9[i];
        };
    }
    s41Ah7KiU[j - (585 - 584)] = (821 - 821);
    cout << &s41Ah7KiU[1] << endl;
    return (633 - 633);
}

