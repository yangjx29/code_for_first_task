int main () {
    double  u;
    int WLxUV519W;
    double  ZZ3z087gkpY [200];
    int E0gGcd [(710 - 700)], knExQPX57q [10], z [10], IK42NLPCux [200], gMdQuq [200];
    int k;
    k = (434 - 434);
    int UWI7mJ6CrF, eRWOqHwT;
    scanf ("%d", &UWI7mJ6CrF);
    for (int l65rxON80Ld4 = (52 - 52);
    l65rxON80Ld4 < UWI7mJ6CrF; l65rxON80Ld4++) {
        scanf ("%d %d %d", &E0gGcd[l65rxON80Ld4], &knExQPX57q[l65rxON80Ld4], &z[l65rxON80Ld4]);
    }
    for (int l65rxON80Ld4 = 0;
    l65rxON80Ld4 < UWI7mJ6CrF; l65rxON80Ld4++) {
        for (int CNJoYOGrvQS = l65rxON80Ld4 + (647 - 646);
        CNJoYOGrvQS < UWI7mJ6CrF; CNJoYOGrvQS++) {
            eRWOqHwT = (E0gGcd[l65rxON80Ld4] - E0gGcd[CNJoYOGrvQS]) * (E0gGcd[l65rxON80Ld4] - E0gGcd[CNJoYOGrvQS]) + (knExQPX57q[l65rxON80Ld4] - knExQPX57q[CNJoYOGrvQS]) * (knExQPX57q[l65rxON80Ld4] - knExQPX57q[CNJoYOGrvQS]) + (z[l65rxON80Ld4] - z[CNJoYOGrvQS]) * (z[l65rxON80Ld4] - z[CNJoYOGrvQS]);
            ZZ3z087gkpY[k] = sqrt (eRWOqHwT);
            IK42NLPCux[k] = l65rxON80Ld4;
            gMdQuq[k] = CNJoYOGrvQS;
            k++;
        }
    }
    for (int ee8YiS4Eu9I = 1;
    ee8YiS4Eu9I < k; ee8YiS4Eu9I++) {
        for (int eUXDqP = 0;
        eUXDqP < k - ee8YiS4Eu9I; eUXDqP++) {
            if (ZZ3z087gkpY[eUXDqP] < ZZ3z087gkpY[eUXDqP + 1]) {
                u = ZZ3z087gkpY[eUXDqP];
                ZZ3z087gkpY[eUXDqP] = ZZ3z087gkpY[eUXDqP + 1];
                ZZ3z087gkpY[eUXDqP + 1] = u;
                WLxUV519W = IK42NLPCux[eUXDqP];
                IK42NLPCux[eUXDqP] = IK42NLPCux[eUXDqP + 1];
                IK42NLPCux[eUXDqP + 1] = WLxUV519W;
                WLxUV519W = gMdQuq[eUXDqP];
                gMdQuq[eUXDqP] = gMdQuq[eUXDqP + 1];
                gMdQuq[eUXDqP + 1] = WLxUV519W;
            }
        }
    }
    for (int l65rxON80Ld4 = 0;
    l65rxON80Ld4 < k; l65rxON80Ld4++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", E0gGcd[IK42NLPCux[l65rxON80Ld4]], knExQPX57q[IK42NLPCux[l65rxON80Ld4]], z[IK42NLPCux[l65rxON80Ld4]], E0gGcd[gMdQuq[l65rxON80Ld4]], knExQPX57q[gMdQuq[l65rxON80Ld4]], z[gMdQuq[l65rxON80Ld4]], ZZ3z087gkpY[l65rxON80Ld4]);
    }
    return 0;
}

