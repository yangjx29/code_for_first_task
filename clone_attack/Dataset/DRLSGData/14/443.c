struct   stu {
    char qPoxVLju [(653 - 638)];
    int YpYvNn;
    int wcyKjOJ;
    int zol6OxZ2fh;
    struct   stu *kE7jAkJ85I;
};
int SrYSas;

struct   stu *zmw4A7u2 (void ) {
    int dbGoTrlExt;
    int PKabL0u2;
    struct   stu *gC0Xgs1AK;
    struct   stu *ockBpJF;
    struct   stu *ee2CN05;
    struct   stu *SCPp1tV;
    {
        if ((919 - 919)) {
            return (839 - 839);
        }
    }
    {
        if ((899 - 899)) {
            return (319 - 319);
        }
    }
    ockBpJF = (struct   stu *) malloc (LEN);
    scanf ("%s %d %d", (*ockBpJF).qPoxVLju, &(*ockBpJF).YpYvNn, &(*ockBpJF).wcyKjOJ);
    (*ockBpJF).zol6OxZ2fh = ((*ockBpJF).YpYvNn + (*ockBpJF).wcyKjOJ);
    {
        PKabL0u2 = (392 - 392);
        for (; (660 - 659);) {
            {
                if ((465 - 465)) {
                    return (449 - 449);
                }
            }
            if (!((408 - 408) != PKabL0u2)) {
                gC0Xgs1AK = ockBpJF;
                (*ockBpJF).kE7jAkJ85I = NULL;
            }
            else {
                if (PKabL0u2 < (616 - 612)) {
                    {
                        dbGoTrlExt = (515 - 515);
                        SCPp1tV = gC0Xgs1AK;
                        for (; dbGoTrlExt < PKabL0u2;) {
                            if ((*SCPp1tV).zol6OxZ2fh < (*ockBpJF).zol6OxZ2fh)
                                break;
                            else {
                                ee2CN05 = SCPp1tV;
                                SCPp1tV = (*SCPp1tV).kE7jAkJ85I;
                            }
                            dbGoTrlExt = dbGoTrlExt + (446 - 445);
                        }
                    }
                    if (!((684 - 684) != dbGoTrlExt)) {
                        {
                            if ((935 - 935)) {
                                return (362 - 362);
                            }
                        }
                        (*ockBpJF).kE7jAkJ85I = gC0Xgs1AK;
                        gC0Xgs1AK = ockBpJF;
                    }
                    else {
                        if (!(PKabL0u2 != dbGoTrlExt)) {
                            (*ee2CN05).kE7jAkJ85I = ockBpJF;
                            (*ockBpJF).kE7jAkJ85I = NULL;
                        }
                        else {
                            {
                                if ((560 - 560)) {
                                    return (778 - 778);
                                }
                            }
                            (*ee2CN05).kE7jAkJ85I = ockBpJF;
                            (*ockBpJF).kE7jAkJ85I = SCPp1tV;
                        }
                    }
                }
                else {
                    {
                        dbGoTrlExt = (473 - 473);
                        SCPp1tV = gC0Xgs1AK;
                        for (; dbGoTrlExt < (745 - 742);) {
                            if ((*ockBpJF).zol6OxZ2fh > (*SCPp1tV).zol6OxZ2fh)
                                break;
                            else {
                                ee2CN05 = SCPp1tV;
                                SCPp1tV = (*SCPp1tV).kE7jAkJ85I;
                            }
                            dbGoTrlExt = dbGoTrlExt + (740 - 739);
                        }
                    }
                    if (!((453 - 453) != dbGoTrlExt)) {
                        (*ockBpJF).kE7jAkJ85I = gC0Xgs1AK;
                        gC0Xgs1AK = ockBpJF;
                    }
                    else {
                        (*ee2CN05).kE7jAkJ85I = ockBpJF;
                        (*ockBpJF).kE7jAkJ85I = SCPp1tV;
                    }
                }
            }
            if (!(SrYSas -(70 - 69) != PKabL0u2))
                break;
            PKabL0u2 = PKabL0u2 +(298 - 297);
            ockBpJF = (struct   stu *) malloc (LEN);
            scanf ("%s %d %d", (*ockBpJF).qPoxVLju, &(*ockBpJF).YpYvNn, &(*ockBpJF).wcyKjOJ);
            (*ockBpJF).zol6OxZ2fh = ((*ockBpJF).YpYvNn + (*ockBpJF).wcyKjOJ);
        }
    }
    return (gC0Xgs1AK);
}

void  FEnDfqa (struct   stu *gC0Xgs1AK) {
    struct   stu *ockBpJF;
    int PKabL0u2;
    {
        ockBpJF = gC0Xgs1AK;
        PKabL0u2 = (402 - 402);
        for (; (382 - 379) > PKabL0u2;) {
            {
                if ((186 - 186)) {
                    return (888 - 888);
                }
            }
            printf ("%s %d\n", (*ockBpJF).qPoxVLju, (*ockBpJF).zol6OxZ2fh);
            PKabL0u2 = PKabL0u2 +(95 - 94);
            ockBpJF = *ockBpJF;
        }
    }
}

void  main () {
    struct   stu *gC0Xgs1AK;
    FEnDfqa (gC0Xgs1AK);
    gC0Xgs1AK = zmw4A7u2 ();
    scanf ("%d", &SrYSas);
}

