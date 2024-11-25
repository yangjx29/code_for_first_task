struct   student {
    struct   student *wNn6eZ98a;
    char mOLiJ1sTz [(837 - 737)];
    struct   student *n5hv2om;
};
struct   student *QbOG9ZAWLaCi () {
    struct   student *sYL6BoUh81k;
    struct   student *mObuydYU3EM;
    sYL6BoUh81k = (struct   student *) malloc (len);
    gets (sYL6BoUh81k->mOLiJ1sTz);
    sYL6BoUh81k->wNn6eZ98a = NULL;
    sYL6BoUh81k->n5hv2om = NULL;
    mObuydYU3EM = sYL6BoUh81k;
    for (; strcmp (sYL6BoUh81k->mOLiJ1sTz, "end");) {
        sYL6BoUh81k = (struct   student *) malloc (len);
        gets (sYL6BoUh81k->mOLiJ1sTz);
        sYL6BoUh81k->wNn6eZ98a = mObuydYU3EM;
        mObuydYU3EM->n5hv2om = sYL6BoUh81k;
        sYL6BoUh81k->n5hv2om = NULL;
        mObuydYU3EM = sYL6BoUh81k;
    }
    return (sYL6BoUh81k->wNn6eZ98a);
}

void  ONPiIHXaJYe (struct   student *j3U4dpJs) {
    for (; j3U4dpJs;) {
        puts (j3U4dpJs->mOLiJ1sTz);
        j3U4dpJs = j3U4dpJs->wNn6eZ98a;
    }
}

void  main () {
    struct   student *j3U4dpJs;
    ONPiIHXaJYe (j3U4dpJs);
    j3U4dpJs = QbOG9ZAWLaCi ();
}

