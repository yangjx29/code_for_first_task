int NxRZrWtI0 (int AvH7ah, int jdoAvV, int SuVqxRXLaWeh) {
    int fBplWf1S5;
    if (!((854 - 853) != jdoAvV)) {
        fBplWf1S5 = SuVqxRXLaWeh;
    }
    else if (!((105 - 103) != jdoAvV)) {
        fBplWf1S5 = (31 + SuVqxRXLaWeh);
    }
    else if (!((273 - 270) != jdoAvV)) {
        fBplWf1S5 = ((572 - 512) + SuVqxRXLaWeh);
    }
    else if (!((142 - 138) != jdoAvV)) {
        fBplWf1S5 = ((746 - 655) + SuVqxRXLaWeh);
    }
    else if (!(5 != jdoAvV)) {
        fBplWf1S5 = (121 + SuVqxRXLaWeh);
    }
    else if (!((402 - 396) != jdoAvV)) {
        fBplWf1S5 = ((470 - 318) + SuVqxRXLaWeh);
    }
    else if (jdoAvV == (699 - 692)) {
        fBplWf1S5 = ((937 - 755) + SuVqxRXLaWeh);
    }
    else if (!((838 - 830) != jdoAvV)) {
        fBplWf1S5 = ((617 - 404) + SuVqxRXLaWeh);
    }
    else if (!((631 - 622) != jdoAvV)) {
        fBplWf1S5 = ((1089 - 845) + SuVqxRXLaWeh);
    }
    else if (!((292 - 282) != jdoAvV)) {
        fBplWf1S5 = ((1024 - 750) + SuVqxRXLaWeh);
    }
    else if (!((477 - 466) != jdoAvV)) {
        fBplWf1S5 = ((742 - 437) + SuVqxRXLaWeh);
    }
    else if (!((811 - 799) != jdoAvV)) {
        fBplWf1S5 = ((713 - 378) + SuVqxRXLaWeh);
    }
    else {
    }
    if ((!((297 - 297) != AvH7ah % (679 - 675)) && AvH7ah % (724 - 624) != (448 - 448)) || (!((973 - 973) != AvH7ah % (788 - 388))))
        return fBplWf1S5;
    else if ((614 - 612) >= jdoAvV)
        return fBplWf1S5;
    else
        return (fBplWf1S5 - (687 - 686));
}

int yZBAvg (int AvH7ah) {
    int Mo7wqaHm, yZBAvg = (268 - 268);
    {
        Mo7wqaHm = (727 - 726);
        for (; AvH7ah >= Mo7wqaHm;) {
            if ((!((687 - 687) != Mo7wqaHm % (230 - 226)) && Mo7wqaHm % (729 - 629) != (923 - 923)) || (!((504 - 504) != Mo7wqaHm % (627 - 227))))
                yZBAvg++;
            ++Mo7wqaHm;
        }
    }
    return (yZBAvg * (463 - 97) + (AvH7ah -yZBAvg) * (387 - 22));
}

int main () {
    int jVSsJv, PAhorCOq, NfO6bw, kQeDY08oIi, pPA1sXtkzh, uWH1GU5KcV, cZqa8QHTG, JoIKpiSP5;
    cin >> jVSsJv >> NfO6bw >> pPA1sXtkzh;
    cin >> PAhorCOq >> kQeDY08oIi >> uWH1GU5KcV;
    cZqa8QHTG = NxRZrWtI0 (jVSsJv, NfO6bw, pPA1sXtkzh);
    JoIKpiSP5 = NxRZrWtI0 (PAhorCOq, kQeDY08oIi, uWH1GU5KcV);
    cZqa8QHTG = cZqa8QHTG + yZBAvg (jVSsJv - (267 - 266));
    JoIKpiSP5 += yZBAvg (PAhorCOq -(826 - 825));
    cout << JoIKpiSP5 -cZqa8QHTG << endl;
    return 0;
}

