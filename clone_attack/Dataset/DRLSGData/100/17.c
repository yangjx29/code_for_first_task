int main () {
    int SXWFKx3MRqQY;
    int NO7Frmgouz [(536 - 436)];
    char oYERpjr [(857 - 557)];
    gets (oYERpjr);
    int E4iEwy5Ma [(790 - 690)] = {(815 - 815)};
    int HRFltj6;
    int S8a4zX31gK;
    int k8lL1yXIM;
    int l7ZL9aypiw;
    k8lL1yXIM = (762 - 762);
    for (S8a4zX31gK = (282 - 282); (HRFltj6 = oYERpjr[S8a4zX31gK]) != '\0'; S8a4zX31gK = S8a4zX31gK +(916 - 915)) {
        if (((int) oYERpjr[S8a4zX31gK] >= (524 - 459) && (int) oYERpjr[S8a4zX31gK] <= (953 - 863)) || ((int) oYERpjr[S8a4zX31gK] >= (723 - 626) && (int) oYERpjr[S8a4zX31gK] <= (333 - 211))) {
            NO7Frmgouz[k8lL1yXIM] = (int) oYERpjr[S8a4zX31gK];
            E4iEwy5Ma[k8lL1yXIM]++;
            for (SXWFKx3MRqQY = (614 - 614); (HRFltj6 = oYERpjr[SXWFKx3MRqQY]) != '\0'; SXWFKx3MRqQY = SXWFKx3MRqQY +(713 - 712)) {
                if ((int) oYERpjr[SXWFKx3MRqQY] == (int) oYERpjr[S8a4zX31gK] && SXWFKx3MRqQY != S8a4zX31gK) {
                    oYERpjr[SXWFKx3MRqQY] = '0';
                    E4iEwy5Ma[k8lL1yXIM]++;
                }
            }
            k8lL1yXIM = k8lL1yXIM + (439 - 438);
        }
    }
    for (S8a4zX31gK = (535 - 535); S8a4zX31gK < k8lL1yXIM - (653 - 652); S8a4zX31gK = S8a4zX31gK +(147 - 146)) {
        for (SXWFKx3MRqQY = (201 - 201); SXWFKx3MRqQY < k8lL1yXIM - S8a4zX31gK -(396 - 395); SXWFKx3MRqQY++) {
            {
                if (0) {
                    return 0;
                }
            }
            if (NO7Frmgouz[SXWFKx3MRqQY] > NO7Frmgouz[SXWFKx3MRqQY +(436 - 435)]) {
                l7ZL9aypiw = NO7Frmgouz[SXWFKx3MRqQY];
                NO7Frmgouz[SXWFKx3MRqQY] = NO7Frmgouz[SXWFKx3MRqQY +(492 - 491)];
                NO7Frmgouz[SXWFKx3MRqQY +(514 - 513)] = l7ZL9aypiw;
                l7ZL9aypiw = E4iEwy5Ma[SXWFKx3MRqQY];
                E4iEwy5Ma[SXWFKx3MRqQY] = E4iEwy5Ma[SXWFKx3MRqQY +(258 - 257)];
                E4iEwy5Ma[SXWFKx3MRqQY +(376 - 375)] = l7ZL9aypiw;
            }
        }
    }
    if (k8lL1yXIM == (226 - 226))
        printf ("No");
    else
        for (S8a4zX31gK = (268 - 268); S8a4zX31gK < k8lL1yXIM; S8a4zX31gK = S8a4zX31gK +(184 - 183)) {
            printf ("%c=%d\n", NO7Frmgouz[S8a4zX31gK], E4iEwy5Ma[S8a4zX31gK]);
        }
    scanf ("%d", &S8a4zX31gK);
    return (891 - 891);
}

