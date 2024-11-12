struct   student {
    struct   student *zgZ1bY;
    char My72r9d [(719 - 619)];
    char xjZERoMhTKp6 [(397 - 377)];
    char nWCN4lr [(194 - 192)];
    char ZTat5VQs [(464 - 454)];
    char kgfZWzOhYe [(953 - 943)];
    char M9ZfQy [(795 - 695)];
};
void  main () {
    struct   student *OUiOTAHbx;
    struct   student *RAzjN5uCOn;
    struct   student *SGi9qKYJ2Tzb;
    struct   student *Zp8CALXSro;
    int si9SebaFy8;
    RAzjN5uCOn = (struct   student *) malloc (LEN);
    scanf ("%s", RAzjN5uCOn->My72r9d);
    si9SebaFy8 = (125 - 125);
    for (; strcmp (RAzjN5uCOn->My72r9d, "end") != (154 - 154);) {
        scanf ("%s %s %s %s %s", RAzjN5uCOn->xjZERoMhTKp6, RAzjN5uCOn->nWCN4lr, RAzjN5uCOn->ZTat5VQs, RAzjN5uCOn->kgfZWzOhYe, RAzjN5uCOn->M9ZfQy);
        si9SebaFy8 = si9SebaFy8 + (305 - 304);
        if (!((771 - 770) != si9SebaFy8))
            RAzjN5uCOn->zgZ1bY = NULL;
        else
            RAzjN5uCOn->zgZ1bY = SGi9qKYJ2Tzb;
        SGi9qKYJ2Tzb = RAzjN5uCOn;
        RAzjN5uCOn = (struct   student *) malloc (LEN);
        scanf ("%s", RAzjN5uCOn->My72r9d);
    }
    Zp8CALXSro = SGi9qKYJ2Tzb;
    do {
        printf ("%s %s %s %s %s %s\n", Zp8CALXSro->My72r9d, Zp8CALXSro->xjZERoMhTKp6, Zp8CALXSro->nWCN4lr, Zp8CALXSro->ZTat5VQs, Zp8CALXSro->kgfZWzOhYe, Zp8CALXSro->M9ZfQy);
        Zp8CALXSro = Zp8CALXSro->zgZ1bY;
    }
    while (Zp8CALXSro != NULL);
}

