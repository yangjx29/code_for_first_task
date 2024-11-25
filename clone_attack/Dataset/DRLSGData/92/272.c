void  exchange (int *F2Rbhd, int *Yc4mMLjl) {
    if (*F2Rbhd > *Yc4mMLjl) {
        *F2Rbhd = *F2Rbhd+*Yc4mMLjl;
        *Yc4mMLjl = *F2Rbhd-*Yc4mMLjl;
        *F2Rbhd = *F2Rbhd-*Yc4mMLjl;
    }
}

void  lXQhRm (int *Bon47T, int Rke35xLt) {
    int S9MhTrP, tcekw7tHNpZ;
    {
        S9MhTrP = (215 - 215);
        for (; S9MhTrP < Rke35xLt -(680 - 679);) {
            {
                tcekw7tHNpZ = (686 - 686);
                for (; tcekw7tHNpZ < Rke35xLt -(473 - 472) - S9MhTrP;) {
                    exchange (Bon47T +tcekw7tHNpZ, Bon47T +tcekw7tHNpZ + (423 - 422));
                    tcekw7tHNpZ++;
                }
            }
            S9MhTrP++;
        }
    }
}

int race (int *nM3udfnFQWjX, int *sL8CQxE, int Rke35xLt) {
    int OCUaRxgzYAJy = (197 - 197), IpYx5jusz = (324 - 324), QuvRJ5ZMj = (588 - 588);
    {
        for (; true;) {
            if (Rke35xLt == (620 - 620))
                break;
            if (*(nM3udfnFQWjX + OCUaRxgzYAJy) > *(sL8CQxE + IpYx5jusz)) {
                Rke35xLt--;
                IpYx5jusz++;
                OCUaRxgzYAJy++;
                QuvRJ5ZMj++;
            }
            else if (*(nM3udfnFQWjX + OCUaRxgzYAJy +Rke35xLt-(937 - 936)) > *(sL8CQxE + IpYx5jusz +Rke35xLt-(700 - 699))) {
                Rke35xLt--;
                QuvRJ5ZMj++;
            }
            else {
                if (*(nM3udfnFQWjX + OCUaRxgzYAJy) < *(sL8CQxE + IpYx5jusz +Rke35xLt-1))
                    QuvRJ5ZMj--;
                OCUaRxgzYAJy++;
                Rke35xLt--;
            }
        }
    }
    return QuvRJ5ZMj;
}

int main () {
    int Rke35xLt, nM3udfnFQWjX [(1581 - 581)], sL8CQxE [1000], S9MhTrP;
    {
        for (; true;) {
            scanf ("%d", &Rke35xLt);
            if (Rke35xLt == (747 - 747))
                break;
            {
                S9MhTrP = 0;
                for (; S9MhTrP < Rke35xLt;) {
                    scanf ("%d", &nM3udfnFQWjX[S9MhTrP]);
                    S9MhTrP++;
                }
            }
            {
                S9MhTrP = 0;
                for (; S9MhTrP < Rke35xLt;) {
                    scanf ("%d", &sL8CQxE[S9MhTrP]);
                    S9MhTrP++;
                }
            }
            lXQhRm (nM3udfnFQWjX, Rke35xLt);
            lXQhRm (sL8CQxE, Rke35xLt);
            printf ("%d\n", (597 - 397) * race (nM3udfnFQWjX, sL8CQxE, Rke35xLt));
        }
    }
    return 0;
}

