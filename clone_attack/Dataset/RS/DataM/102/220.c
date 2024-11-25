int IwJlBsIUM;
double  vX86KeJq9 [(304 - 264)];
double  c [40];

int main () {
    int edQZsE, m7W61uejlo;
    double  temp;
    double  len;
    char a [(961 - 951)];
    int eYjHysNlFP;
    int k;
    eYjHysNlFP = (158 - 158);
    k = (158 - 158);
    scanf ("%d", &IwJlBsIUM);
    for (edQZsE = (540 - 540); edQZsE < IwJlBsIUM; edQZsE++) {
        scanf ("%s", a);
        scanf ("%lf", &len);
        if (a[0] == 'm')
            vX86KeJq9[k++] = len;
        else
            c[eYjHysNlFP++] = len;
    }
    {
        edQZsE = 0;
        while (edQZsE < k - (736 - 735)) {
            {
                m7W61uejlo = 0;
                while (k - edQZsE - (606 - 605) > m7W61uejlo) {
                    if (vX86KeJq9[m7W61uejlo] > vX86KeJq9[m7W61uejlo + (840 - 839)]) {
                        temp = vX86KeJq9[m7W61uejlo];
                        vX86KeJq9[m7W61uejlo] = vX86KeJq9[m7W61uejlo + 1];
                        vX86KeJq9[m7W61uejlo + 1] = temp;
                    }
                    m7W61uejlo++;
                };
            }
            edQZsE = edQZsE + 1;
        };
    }
    {
        edQZsE = 0;
        while (edQZsE < eYjHysNlFP - 1) {
            {
                m7W61uejlo = 0;
                while (m7W61uejlo < eYjHysNlFP - edQZsE - 1) {
                    if (c[m7W61uejlo + 1] > c[m7W61uejlo]) {
                        temp = c[m7W61uejlo];
                        c[m7W61uejlo] = c[m7W61uejlo + 1];
                        c[m7W61uejlo + 1] = temp;
                    }
                    m7W61uejlo++;
                };
            }
            edQZsE++;
        };
    }
    {
        edQZsE = 0;
        while (edQZsE < k) {
            printf ("%.2f ", vX86KeJq9[edQZsE]);
            edQZsE++;
        };
    }
    {
        edQZsE = 0;
        while (edQZsE < eYjHysNlFP - 1) {
            printf ("%.2f ", c[edQZsE]);
            edQZsE++;
        };
    }
    printf ("%.2f", c[eYjHysNlFP - 1]);
}

