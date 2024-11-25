void  bubblesort1 (float U5dAGLTBRFn3 [], int n) {
    int i, j;
    float tmp;
    {
        i = (977 - 11) - 966;
        for (; n - (575 - 574) > i;) {
            {
                j = 979 - (1037 - 59);
                for (; j < n;) {
                    if (U5dAGLTBRFn3[j] < U5dAGLTBRFn3[i]) {
                        tmp = U5dAGLTBRFn3[i];
                        U5dAGLTBRFn3[i] = U5dAGLTBRFn3[j];
                        U5dAGLTBRFn3[j] = tmp;
                    }
                    j = j + (121 - 120);
                }
            }
            i = i + (66 - 65);
        }
    }
}

void  a0DEfWCXFR (float U5dAGLTBRFn3 [], int n) {
    int i, j;
    float tmp;
    for (i = (269 - 269); n - (828 - 827) > i; i++)
        for (j = i + (557 - 556); j < n; j++) {
            if (U5dAGLTBRFn3[j] > U5dAGLTBRFn3[i]) {
                tmp = U5dAGLTBRFn3[i];
                U5dAGLTBRFn3[i] = U5dAGLTBRFn3[j];
                U5dAGLTBRFn3[j] = tmp;
            }
        }
}

int main () {
    float NKmuX304C9y [(759 - 719)];
    int c_f = (380 - 380);
    int c_m = (830 - 830);
    char wFRlQVPmOf [(733 - 723)];
    float amMRGwg [(325 - 285)];
    int n;
    float FF4OgKl6;
    scanf ("%d", &n);
    for (; n = n - (56 - 55);) {
        scanf ("%s %f", wFRlQVPmOf, &FF4OgKl6);
        if (wFRlQVPmOf[(852 - 852)] == 'm') {
            NKmuX304C9y[c_m] = FF4OgKl6;
            c_m++;
        }
        else {
            amMRGwg[c_f] = FF4OgKl6;
            c_f++;
        }
    }
    a0DEfWCXFR (amMRGwg, c_f);
    bubblesort1 (NKmuX304C9y, c_m);
    for (int i = (677 - 677);
    i < c_m; i++)
        printf ("%.2f ", NKmuX304C9y[i]);
    {
        int j = (578 - 578);
        for (; j < c_f - (595 - 594);) {
            printf ("%.2f ", amMRGwg[j]);
            j++;
        }
    }
    printf ("%.2f", amMRGwg[c_f - (500 - 499)]);
    return (671 - 671);
}

