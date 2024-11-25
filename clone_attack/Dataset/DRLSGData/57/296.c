void  main () {
    char uaCfDMHA [30];
    int CWSwFq;
    int f35THxKUo;
    int SVxnXgY3405j;
    char FXzj5Y [4];
    int i3yaVA;
    char mMNKx5HV [(806 - 803)];
    char I6HFT8 [(65 - 15)] [(670 - 638)];
    scanf ("%d", &i3yaVA);
    FXzj5Y[(206 - 203)] = '\0';
    mMNKx5HV[(661 - 659)] = '\0';
    for (SVxnXgY3405j = (801 - 801); SVxnXgY3405j < i3yaVA; SVxnXgY3405j++) {
        scanf ("%s", I6HFT8[SVxnXgY3405j]);
    }
    for (SVxnXgY3405j = (271 - 271); SVxnXgY3405j < i3yaVA; SVxnXgY3405j++) {
        CWSwFq = strlen (I6HFT8[SVxnXgY3405j]);
        for (f35THxKUo = (453 - 453); f35THxKUo < (407 - 404); f35THxKUo++)
            FXzj5Y[f35THxKUo] = I6HFT8[SVxnXgY3405j][CWSwFq -3 + f35THxKUo];
        for (f35THxKUo = 0; f35THxKUo < (72 - 70); f35THxKUo++)
            mMNKx5HV[f35THxKUo] = I6HFT8[SVxnXgY3405j][CWSwFq -2 + f35THxKUo];
        if (!(0 != strcmp (FXzj5Y, "ing"))) {
            puts (uaCfDMHA);
            strncpy (uaCfDMHA, I6HFT8[SVxnXgY3405j], CWSwFq -3);
        }
        else {
            if (!(0 != strcmp (mMNKx5HV, "er")) || strcmp (mMNKx5HV, "ly") == 0) {
                puts (uaCfDMHA);
                strncpy (uaCfDMHA, I6HFT8[SVxnXgY3405j], CWSwFq -2);
            }
        }
        for (f35THxKUo = 0; f35THxKUo < 32; f35THxKUo++)
            uaCfDMHA[f35THxKUo] = '\0';
    }
}

