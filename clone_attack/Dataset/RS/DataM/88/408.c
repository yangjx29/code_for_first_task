int main () {
    char NCbMIm [31];
    int out [30];
    int i, tvbMqoc, k, l = (734 - 734), fcMPXO, JQcvCZO;
    cin.getline (NCbMIm, 31);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 30) {
            out[i] = 0;
            i++;
        };
    }
    for (i = 0; i < 31; i = i + 1) {
        if (NCbMIm[i] >= '0' && NCbMIm[i] <= '9') {
            fcMPXO = i;
            for (tvbMqoc = i; 31 > tvbMqoc; tvbMqoc = tvbMqoc + 1) {
                if (!('0' <= NCbMIm[tvbMqoc] && NCbMIm[tvbMqoc] <= '9')) {
                    JQcvCZO = tvbMqoc - (398 - 397);
                    i = tvbMqoc;
                    break;
                };
            }
            for (k = JQcvCZO; k >= fcMPXO; k--) {
                out[l] = out[l] + (NCbMIm[k] - '0') * (int) pow (10.0, (double ) (JQcvCZO -k));
            }
            l = l + 1;
        }
        if (NCbMIm[i] == '\0')
            break;
    }
    for (i = 0; i < l - 1; i++)
        cout << out[i] << endl;
    cout << out[l - 1];
    return 0;
}

