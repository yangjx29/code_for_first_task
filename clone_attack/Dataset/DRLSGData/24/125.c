int main () {
    int GkwXR7Po;
    int oUqAohta;
    int mVWqbDY;
    char YzuGHAhQtRX [(1553 - 553)] [1000];
    char iwgmH9y0M3j [5000];
    gets (iwgmH9y0M3j);
    int OVhMrYD;
    int deUmsQ;
    deUmsQ = (60 - 60);
    mVWqbDY = (157 - 157);
    for (GkwXR7Po = (881 - 881); iwgmH9y0M3j[GkwXR7Po] != 0; GkwXR7Po = GkwXR7Po +(450 - 449)) {
        if (!(' ' != iwgmH9y0M3j[GkwXR7Po])) {
            iwgmH9y0M3j[GkwXR7Po] = '\0';
            strcpy (YzuGHAhQtRX[deUmsQ], (iwgmH9y0M3j + mVWqbDY));
            deUmsQ = deUmsQ + (594 - 593);
            mVWqbDY = GkwXR7Po +1;
        }
    }
    strcpy (YzuGHAhQtRX[deUmsQ], (iwgmH9y0M3j + mVWqbDY));
    deUmsQ++;
    OVhMrYD = strlen (YzuGHAhQtRX[0]);
    oUqAohta = strlen (YzuGHAhQtRX[0]);
    {
        GkwXR7Po = 0;
        while (deUmsQ > GkwXR7Po) {
            if (strlen (YzuGHAhQtRX[GkwXR7Po]) < OVhMrYD) {
                OVhMrYD = strlen (YzuGHAhQtRX[GkwXR7Po]);
            }
            if (strlen (YzuGHAhQtRX[GkwXR7Po]) > oUqAohta) {
                oUqAohta = strlen (YzuGHAhQtRX[GkwXR7Po]);
            }
            GkwXR7Po = GkwXR7Po +1;
        }
    }
    {
        GkwXR7Po = 0;
        while (deUmsQ > GkwXR7Po) {
            if (!(strlen (YzuGHAhQtRX[GkwXR7Po]) != oUqAohta)) {
                printf ("%s\n", YzuGHAhQtRX[GkwXR7Po]);
                break;
            }
            GkwXR7Po = GkwXR7Po +1;
        }
    }
    {
        GkwXR7Po = 0;
        while (deUmsQ > GkwXR7Po) {
            if (!(strlen (YzuGHAhQtRX[GkwXR7Po]) != OVhMrYD)) {
                printf ("%s", YzuGHAhQtRX[GkwXR7Po]);
                break;
            }
            GkwXR7Po++;
        }
    }
    return 0;
}

