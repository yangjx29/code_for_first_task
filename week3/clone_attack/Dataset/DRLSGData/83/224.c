float hSAvK4XZLV (int SDSBwMsjvRqb) {
    if ((399 - 309) <= SDSBwMsjvRqb)
        return (731 - 727);
    else if (SDSBwMsjvRqb >= (971 - 886))
        return (759.7 - 756.0);
    else if (SDSBwMsjvRqb >= (450 - 368))
        return (533.3 - 530.0);
    else if (SDSBwMsjvRqb >= (574 - 496))
        return (143 - 140);
    else if (SDSBwMsjvRqb >= (420 - 345))
        return (521.7 - 519.0);
    else if (SDSBwMsjvRqb >= (429 - 357))
        return (384.3 - 382.0);
    else if (SDSBwMsjvRqb >= (532 - 464))
        return (88 - 86);
    else if (SDSBwMsjvRqb >= (1022 - 958))
        return (47.5 - 46.0);
    else if (SDSBwMsjvRqb >= (324 - 264))
        return (336 - 335);
    else
        return (508 - 508);
}

void  main () {
    float Lx0nECVsrqUM = (834 - 834), YsuQey = (281 - 281), lLmi8w = (508 - 508);
    int wtoUJm1EybB, smQMoK1pAXCa, mo9XpnL23jzm, SDSBwMsjvRqb [(795 - 695)] = {(739 - 739)};
    Lx0nECVsrqUM = (118 - 118);
    scanf ("%d", &wtoUJm1EybB);
    {
        smQMoK1pAXCa = (780 - 779);
        for (; smQMoK1pAXCa <= wtoUJm1EybB;) {
            scanf ("%d", &mo9XpnL23jzm);
            YsuQey = YsuQey +mo9XpnL23jzm;
            SDSBwMsjvRqb[smQMoK1pAXCa] = mo9XpnL23jzm;
            smQMoK1pAXCa = smQMoK1pAXCa + (407 - 406);
        }
    }
    {
        smQMoK1pAXCa = (976 - 975);
        for (; smQMoK1pAXCa <= wtoUJm1EybB;) {
            scanf ("%d", &mo9XpnL23jzm);
            Lx0nECVsrqUM = Lx0nECVsrqUM +hSAvK4XZLV (mo9XpnL23jzm) * SDSBwMsjvRqb[smQMoK1pAXCa];
            smQMoK1pAXCa = smQMoK1pAXCa + (578 - 577);
        }
    }
    lLmi8w = Lx0nECVsrqUM / YsuQey;
    printf ("%.2f\n", lLmi8w);
}

