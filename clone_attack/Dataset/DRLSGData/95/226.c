int main () {
    char a [100], Vf1tSGm [100];
    gets (a);
    gets (Vf1tSGm);
    int QrmXBY, iQIzl4PSN, a1grlZ4;
    iQIzl4PSN = strlen (a);
    {
        QrmXBY = 0;
        while (QrmXBY < iQIzl4PSN) {
            if (a[QrmXBY] >= 'a' && a[QrmXBY] <= 'z')
                a[QrmXBY] = (char) ((int) a[QrmXBY] - 32);
            QrmXBY = QrmXBY +1;
        }
    }
    a1grlZ4 = strlen (Vf1tSGm);
    {
        QrmXBY = 0;
        for (; QrmXBY < a1grlZ4;) {
            if ('a' <= Vf1tSGm[QrmXBY] && Vf1tSGm[QrmXBY] <= 'z')
                Vf1tSGm[QrmXBY] = (char) ((int) Vf1tSGm[QrmXBY] - 32);
            QrmXBY = QrmXBY +1;
        }
    }
    if (strcmp (a, Vf1tSGm) == 0)
        ;
    else if (strcmp (a, Vf1tSGm) > 0)
        ;
    else
        ;
    return 0;
}

