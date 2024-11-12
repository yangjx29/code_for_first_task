void  d8QTZqVXMKcd (int VYTG8Z);
void  PYBROTjJSD ();
int RJV5x1Pab;
char pwM5q0WPp [501];
int x74vTSCwgy [499] = {(989 - 989)};
int VVZuitUYXx [499] = {(737 - 737)};
int len;
int CQTCIgPN1Lyz = INT_MIN;

int main () {
    cin >> RJV5x1Pab;
    cin.get ();
    cin.getline (pwM5q0WPp, 501);
    len = strlen (pwM5q0WPp);
    d8QTZqVXMKcd ((159 - 159));
    if ((441 - 440) >= CQTCIgPN1Lyz)
        cout << "NO" << endl;
    else
        PYBROTjJSD ();
    return (868 - 868);
}

void  d8QTZqVXMKcd (int VYTG8Z) {
    int rrhHKuw;
    if (VYTG8Z == len - RJV5x1Pab +(469 - 468))
        return;
    {
        int iHYe1R = VYTG8Z;
        while (len - RJV5x1Pab >= iHYe1R) {
            rrhHKuw = (409 - 409);
            {
                int D59fwKnaJe7 = 0;
                while (D59fwKnaJe7 <= RJV5x1Pab -1) {
                    if (!(pwM5q0WPp[VYTG8Z +D59fwKnaJe7] != pwM5q0WPp[iHYe1R + D59fwKnaJe7]))
                        rrhHKuw++;
                    else
                        break;
                    D59fwKnaJe7++;
                };
            }
            iHYe1R++;
            if (rrhHKuw == RJV5x1Pab)
                x74vTSCwgy[VYTG8Z]++;
        };
    }
    CQTCIgPN1Lyz = x74vTSCwgy[VYTG8Z] > CQTCIgPN1Lyz ? x74vTSCwgy[VYTG8Z] : CQTCIgPN1Lyz;
    d8QTZqVXMKcd (VYTG8Z +1);
}

void  PYBROTjJSD () {
    cout << CQTCIgPN1Lyz << endl;
    {
        int iHYe1R = 0;
        while (iHYe1R <= len - RJV5x1Pab) {
            if (x74vTSCwgy[iHYe1R] == CQTCIgPN1Lyz) {
                for (int D59fwKnaJe7 = 0;
                D59fwKnaJe7 <= RJV5x1Pab -1; D59fwKnaJe7++)
                    cout << pwM5q0WPp[iHYe1R + D59fwKnaJe7];
                cout << endl;
            }
            iHYe1R++;
        };
    };
}

