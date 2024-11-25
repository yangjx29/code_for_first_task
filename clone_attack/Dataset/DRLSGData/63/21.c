int main () {
    int xNqlRCcJ;
    int Ug760YSO9Z;
    int TkxBreIUGVmO;
    int waOqzxvkcF9;
    int ixCta7Iq;
    int q9XqZaT4;
    int GCqZjIT [(343 - 242)] [(485 - 384)];
    int M1MW8sagdQ [(829 - 728)] [(663 - 562)];
    int fHZnS39f [(542 - 441)] [(996 - 895)] = {(37 - 37)};
    cin >> Ug760YSO9Z >> xNqlRCcJ;
    for (waOqzxvkcF9 = (905 - 904); waOqzxvkcF9 <= Ug760YSO9Z; waOqzxvkcF9++) {
        for (ixCta7Iq = (263 - 262); ixCta7Iq <= xNqlRCcJ; ixCta7Iq = ixCta7Iq + 1) {
            cin >> GCqZjIT[waOqzxvkcF9][ixCta7Iq];
        }
    }
    cin >> xNqlRCcJ >> TkxBreIUGVmO;
    for (waOqzxvkcF9 = (465 - 464); waOqzxvkcF9 <= xNqlRCcJ; waOqzxvkcF9++) {
        for (ixCta7Iq = (333 - 332); ixCta7Iq <= TkxBreIUGVmO; ixCta7Iq++) {
            cin >> M1MW8sagdQ[waOqzxvkcF9][ixCta7Iq];
        }
    }
    for (waOqzxvkcF9 = (381 - 380); waOqzxvkcF9 <= Ug760YSO9Z; waOqzxvkcF9++) {
        for (ixCta7Iq = (414 - 413); ixCta7Iq <= TkxBreIUGVmO; ixCta7Iq++) {
            for (q9XqZaT4 = (779 - 778); q9XqZaT4 <= xNqlRCcJ; q9XqZaT4++) {
                fHZnS39f[waOqzxvkcF9][ixCta7Iq] += GCqZjIT[waOqzxvkcF9][q9XqZaT4] * M1MW8sagdQ[q9XqZaT4][ixCta7Iq];
            }
            if (ixCta7Iq == (651 - 650))
                printf ("\n%d", fHZnS39f[waOqzxvkcF9][ixCta7Iq]);
            else
                printf (" %d", fHZnS39f[waOqzxvkcF9][ixCta7Iq]);
        }
    }
    return (882 - 882);
}

