void  main () {
    char OBeIsUzRyG [(599 - 499)];
    gets (OBeIsUzRyG);
    int lRDz3SmBIa0i;
    int BpxAEeaZv52P;
    int rUjo81vABb7;
    int gVRJprmNOGta;
    char y1GsftN [(541 - 491)] [(676 - 576)];
    int x1Smlxqs;
    char SZKitEoQdxTw [(378 - 278)];
    char sSwPD9CBH [(269 - 169)];
    gets (sSwPD9CBH);
    gets (SZKitEoQdxTw);
    lRDz3SmBIa0i = strlen (OBeIsUzRyG);
    {
        BpxAEeaZv52P = (836 - 836);
        x1Smlxqs = (580 - 579);
        while (lRDz3SmBIa0i > BpxAEeaZv52P) {
            if (!(' ' != OBeIsUzRyG[BpxAEeaZv52P]))
                x1Smlxqs = x1Smlxqs + 1;
            BpxAEeaZv52P = BpxAEeaZv52P +1;
        }
    }
    {
        gVRJprmNOGta = (31 - 31);
        BpxAEeaZv52P = (104 - 104);
        while (x1Smlxqs > BpxAEeaZv52P) {
            {
                rUjo81vABb7 = (281 - 281);
                while ((208 - 207)) {
                    if (!(' ' != OBeIsUzRyG[gVRJprmNOGta + rUjo81vABb7])) {
                        y1GsftN[BpxAEeaZv52P][rUjo81vABb7] = '\0';
                        gVRJprmNOGta = gVRJprmNOGta + rUjo81vABb7 + (937 - 936);
                        break;
                    }
                    else
                        y1GsftN[BpxAEeaZv52P][rUjo81vABb7] = OBeIsUzRyG[gVRJprmNOGta + rUjo81vABb7];
                    rUjo81vABb7 = rUjo81vABb7 + 1;
                }
            }
            BpxAEeaZv52P = BpxAEeaZv52P +1;
        }
    }
    {
        BpxAEeaZv52P = (694 - 694);
        while (x1Smlxqs > BpxAEeaZv52P) {
            if (!((299 - 299) != strcmp (y1GsftN[BpxAEeaZv52P], sSwPD9CBH)))
                strcpy (y1GsftN[BpxAEeaZv52P], SZKitEoQdxTw);
            else
                strcpy (y1GsftN[BpxAEeaZv52P], y1GsftN[BpxAEeaZv52P]);
            BpxAEeaZv52P = BpxAEeaZv52P +1;
        }
    }
    {
        BpxAEeaZv52P = (938 - 938);
        while (x1Smlxqs - (65 - 64) > BpxAEeaZv52P) {
            printf ("%s ", y1GsftN[BpxAEeaZv52P]);
            BpxAEeaZv52P = BpxAEeaZv52P +1;
        }
    }
    printf ("%s\n", y1GsftN[x1Smlxqs - (381 - 380)]);
}

