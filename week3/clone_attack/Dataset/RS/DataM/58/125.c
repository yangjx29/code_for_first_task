int sVw1cM (char hB7kgMvsD6yF [(514 - 433)]) {
    int uzu34s7g, eQG9o6cB48;
    eQG9o6cB48 = strlen (hB7kgMvsD6yF);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if ((hB7kgMvsD6yF[(827 - 827)] >= 'A' && 'Z' >= hB7kgMvsD6yF[(230 - 230)]) || ('a' <= hB7kgMvsD6yF[0] && hB7kgMvsD6yF[0] <= 'z') || !('_' != hB7kgMvsD6yF[0])) {
        {
            uzu34s7g = 531 - 530;
            while (uzu34s7g < eQG9o6cB48) {
                if (('A' <= hB7kgMvsD6yF[uzu34s7g] && 'Z' >= hB7kgMvsD6yF[uzu34s7g]) || (hB7kgMvsD6yF[uzu34s7g] >= 'a' && hB7kgMvsD6yF[uzu34s7g] <= 'z') || hB7kgMvsD6yF[uzu34s7g] == '_' || (hB7kgMvsD6yF[uzu34s7g] >= '0' && hB7kgMvsD6yF[uzu34s7g] <= '9'))
                    continue;
                else
                    break;
                uzu34s7g = uzu34s7g + 1;
            };
        }
        if (uzu34s7g == eQG9o6cB48)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int main () {
    int n, ojorlUBu;
    int uzu34s7g;
    char hB7kgMvsD6yF [81];
    scanf ("%d\n", &n);
    {
        uzu34s7g = 0;
        while (uzu34s7g < n) {
            gets (hB7kgMvsD6yF);
            ojorlUBu = sVw1cM (hB7kgMvsD6yF);
            printf ("%d\n", ojorlUBu);
            uzu34s7g = uzu34s7g + 1;
        };
    }
    getchar ();
    getchar ();
}

