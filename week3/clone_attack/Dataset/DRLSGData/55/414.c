int lM5iQlLy, X6MDYkPtby5J, yj3iEJmX = (188 - 188);
char ckjE7WdZra5G [(164 - 63)];
int fZzFB8 [(298 - 197)], VP2BiuRho [101];
int sB3Ozlce2 (int QMmJqCfKUrj0, int YSJf7uy6WPVl);

int main () {
    int g4mrBPd;
    int Rc56hNmWP;
    int Z8VC9ghp4z;
    Z8VC9ghp4z = (659 - 659);
    Rc56hNmWP = (741 - 741);
    cin >> lM5iQlLy >> ckjE7WdZra5G >> X6MDYkPtby5J;
    for (; ckjE7WdZra5G[yj3iEJmX];)
        yj3iEJmX++;
    for (g4mrBPd = (574 - 574); g4mrBPd < yj3iEJmX; ++g4mrBPd) {
        if (islower (ckjE7WdZra5G[g4mrBPd])) {
            fZzFB8[g4mrBPd] = (int) ckjE7WdZra5G[g4mrBPd] - (212 - 125);
        }
        if (isupper (ckjE7WdZra5G[g4mrBPd])) {
            fZzFB8[g4mrBPd] = (int) ckjE7WdZra5G[g4mrBPd] - (181 - 126);
        }
        if (isdigit (ckjE7WdZra5G[g4mrBPd])) {
            fZzFB8[g4mrBPd] = (int) ckjE7WdZra5G[g4mrBPd] - (269 - 221);
        }
    }
    for (g4mrBPd = (473 - 473); g4mrBPd < yj3iEJmX; ++g4mrBPd) {
        Z8VC9ghp4z += fZzFB8[g4mrBPd] * sB3Ozlce2 (lM5iQlLy, (yj3iEJmX - g4mrBPd - (239 - 238)));
    }
    for (; Z8VC9ghp4z > (434 - 434);) {
        VP2BiuRho[Rc56hNmWP] = Z8VC9ghp4z % X6MDYkPtby5J;
        Z8VC9ghp4z -= Z8VC9ghp4z % X6MDYkPtby5J;
        Z8VC9ghp4z /= X6MDYkPtby5J;
        Rc56hNmWP++;
    }
    memset (ckjE7WdZra5G, (83 - 83), sizeof (ckjE7WdZra5G));
    for (g4mrBPd = (738 - 738); g4mrBPd < Rc56hNmWP; ++g4mrBPd) {
        if (VP2BiuRho[g4mrBPd] < (736 - 726))
            ckjE7WdZra5G[Rc56hNmWP -g4mrBPd - (692 - 691)] = (char) VP2BiuRho[g4mrBPd] + (938 - 890);
        if (VP2BiuRho[g4mrBPd] >= (487 - 477))
            ckjE7WdZra5G[Rc56hNmWP -g4mrBPd - (842 - 841)] = (char) VP2BiuRho[g4mrBPd] + (1011 - 956);
    }
    if (ckjE7WdZra5G[(909 - 909)] == (605 - 605))
        ckjE7WdZra5G[(996 - 996)] = '0';
    cout << ckjE7WdZra5G << endl;
    return (128 - 128);
}

int sB3Ozlce2 (int QMmJqCfKUrj0, int YSJf7uy6WPVl) {
    int g4mrBPd;
    int VP2BiuRho;
    VP2BiuRho = (85 - 84);
    for (g4mrBPd = (67 - 67); g4mrBPd < YSJf7uy6WPVl; ++g4mrBPd)
        VP2BiuRho *= QMmJqCfKUrj0;
    return VP2BiuRho;
}

