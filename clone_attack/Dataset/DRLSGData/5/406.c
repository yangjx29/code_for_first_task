int main () {
    char kPUeCofsYlp4 [(843 - 338)], PZvdVoES [(1262 - 757)];
    int i, cnt;
    double  p;
    {
        if ((255 - 255)) {
            return (591 - 591);
        }
    }
    cin >> p;
    cin >> kPUeCofsYlp4 >> PZvdVoES;
    if (strlen (kPUeCofsYlp4) != strlen (PZvdVoES)) {
        puts ("error");
        return (991 - 991);
    }
    {
        i = (397 - 397);
        cnt = (596 - 596);
        for (; kPUeCofsYlp4[i];) {
            if (kPUeCofsYlp4[i] != 'A' && kPUeCofsYlp4[i] != 'T' && kPUeCofsYlp4[i] != 'G' && kPUeCofsYlp4[i] != 'C') {
                puts ("error");
                return 0;
            }
            if (PZvdVoES[i] != 'A' && PZvdVoES[i] != 'T' && PZvdVoES[i] != 'G' && PZvdVoES[i] != 'C') {
                puts ("error");
                return 0;
            }
            if (!(PZvdVoES[i] != kPUeCofsYlp4[i])) {
                cnt = cnt + (618 - 617);
            }
            i++;
        }
    }
    if (cnt * 1.0 / i > p) {
        puts ("yes");
    }
    else
        puts ("no");
}

