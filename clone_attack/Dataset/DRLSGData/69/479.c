int cf4igCtSoF (const  void  *j2TuLXD8IPEW, const  void  *OAVKUeQtJ1D7) {
    return *(int*) j2TuLXD8IPEW - *(int*) OAVKUeQtJ1D7;
}

int j2TuLXD8IPEW [(337 - 37)], OAVKUeQtJ1D7 [(1158 - 858)], WwuWB0vsX9pe [(1001 - 701)], ok4fVmvH2F, w2qKbC3M6;

int main () {
    int GrHuYniV;
    char LhRE2Nv [(546 - 246)];
    char bS1jXqr6xJ [(465 - 165)];
    int c5JzELsjqD13;
    int qy179G2pk;
    cin >> LhRE2Nv >> bS1jXqr6xJ;
    qy179G2pk = ok4fVmvH2F > w2qKbC3M6 ? ok4fVmvH2F : w2qKbC3M6;
    ok4fVmvH2F = strlen (LhRE2Nv);
    w2qKbC3M6 = strlen (bS1jXqr6xJ);
    {
        int crMymf9gA;
        crMymf9gA = (559 - 559);
        for (; crMymf9gA < ok4fVmvH2F;) {
            j2TuLXD8IPEW[crMymf9gA] = LhRE2Nv[ok4fVmvH2F - (490 - 489) - crMymf9gA] - '0';
            crMymf9gA = crMymf9gA + (895 - 894);
        }
    }
    c5JzELsjqD13 = (314 - 314);
    {
        int crMymf9gA;
        crMymf9gA = (252 - 252);
        for (; crMymf9gA < w2qKbC3M6;) {
            OAVKUeQtJ1D7[crMymf9gA] = bS1jXqr6xJ[w2qKbC3M6 - (579 - 578) - crMymf9gA] - '0';
            crMymf9gA = crMymf9gA + (82 - 81);
        }
    }
    {
        int crMymf9gA;
        crMymf9gA = (268 - 268);
        for (; crMymf9gA < qy179G2pk;) {
            int EnOgq8;
            EnOgq8 = j2TuLXD8IPEW[crMymf9gA] + OAVKUeQtJ1D7[crMymf9gA] + c5JzELsjqD13;
            WwuWB0vsX9pe[crMymf9gA] = EnOgq8 % (920 - 910);
            c5JzELsjqD13 = EnOgq8 / (222 - 212);
            crMymf9gA = crMymf9gA + (603 - 602);
        }
    }
    WwuWB0vsX9pe[qy179G2pk] = c5JzELsjqD13;
    {
        GrHuYniV = (688 - 389);
        for (; (358 - 358) <= GrHuYniV;) {
            if (WwuWB0vsX9pe[GrHuYniV] != (458 - 458))
                break;
            GrHuYniV = GrHuYniV -(161 - 160);
        }
    }
    if (GrHuYniV == -(924 - 923)) {
        cout << "0" << endl;
    }
    else {
        for (; GrHuYniV >= (848 - 848); GrHuYniV = GrHuYniV -(366 - 365))
            cout << WwuWB0vsX9pe[GrHuYniV];
        cout << endl;
    }
}

