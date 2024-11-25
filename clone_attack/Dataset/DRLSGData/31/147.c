struct   student {
    char MqaSgbJyPGN [(324 - 274)];
    struct   student *Zu5UzR;
};
int main () {
    struct   student *j1qSHiDFL ();
    void  FjxDrmQT (struct   student *xrEiA0);
    struct   student *xrEiA0;
    FjxDrmQT (xrEiA0);
    xrEiA0 = j1qSHiDFL ();
    return (194 - 194);
}

struct   student *j1qSHiDFL () {
    char QmjJA4y [(176 - 126)] = {'e', 'n', 'd'};
    struct   student *PU7MrV3;
    struct   student *rBji3DM;
    struct   student *xrEiA0;
    PU7MrV3 = (struct   student *) malloc (len);
    rBji3DM = PU7MrV3;
    gets ((PU7MrV3->MqaSgbJyPGN));
    {
        for (; true;) {
            PU7MrV3 = (struct   student *) malloc (len);
            gets ((PU7MrV3->MqaSgbJyPGN));
            if (strcmp (PU7MrV3->MqaSgbJyPGN, QmjJA4y)) {
                (PU7MrV3->Zu5UzR) = rBji3DM;
            }
            else {
                xrEiA0 = rBji3DM;
                break;
            }
            rBji3DM = PU7MrV3;
        };
    }
    return (xrEiA0);
}

void  FjxDrmQT (struct   student *xrEiA0) {
    struct   student *MdDFVGQL;
    MdDFVGQL = xrEiA0;
    {
        for (; true;) {
            printf ("%s\n", MdDFVGQL->MqaSgbJyPGN);
            if ((MdDFVGQL->Zu5UzR) == NULL) {
                break;
            }
            else {
                MdDFVGQL = (MdDFVGQL->Zu5UzR);
            };
        };
    };
}

