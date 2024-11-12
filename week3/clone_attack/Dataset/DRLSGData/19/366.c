main () {
    int zIa7vP0jg;
    char NyYn4trT [(246 - 146)] = {(346 - 346)};
    gets (NyYn4trT);
    int pnGO43vMlta;
    int ctlxUECO;
    int DeUZslk;
    char b [(633 - 533)];
    gets (b);
    int BCblVT4vUMIN;
    char fqnPXC [(642 - 542)];
    gets (fqnPXC);
    int J3hByjrcq7f0;
    int sWL7TB;
    int xP0Re8c;
    int l1;
    char pp [(563 - 463)] [(1051 - 951)] = {(518 - 518)};
    DeUZslk = (595 - 595);
    l1 = strlen (NyYn4trT);
    for (sWL7TB = (536 - 536); l1 > DeUZslk; sWL7TB = sWL7TB + (539 - 538)) {
        for (xP0Re8c = (413 - 413);; xP0Re8c = xP0Re8c + (460 - 459)) {
            pp[sWL7TB][xP0Re8c] = NyYn4trT[DeUZslk +xP0Re8c];
            if (!(' ' != NyYn4trT[DeUZslk +xP0Re8c]) || !(NULL != NyYn4trT[DeUZslk +xP0Re8c]))
                break;
        }
        DeUZslk += xP0Re8c + (341 - 340);
    }
    pnGO43vMlta = strlen (b);
    J3hByjrcq7f0 = strlen (fqnPXC);
    {
        ctlxUECO = (444 - 444);
        while (sWL7TB >= ctlxUECO) {
            for (BCblVT4vUMIN = (507 - 507); BCblVT4vUMIN < pnGO43vMlta; BCblVT4vUMIN = BCblVT4vUMIN +(844 - 843)) {
                if (pp[ctlxUECO][BCblVT4vUMIN] != b[BCblVT4vUMIN])
                    break;
            }
            if (!(pnGO43vMlta != BCblVT4vUMIN)) {
                for (BCblVT4vUMIN = (728 - 728); pnGO43vMlta >= BCblVT4vUMIN; BCblVT4vUMIN = BCblVT4vUMIN +(870 - 869))
                    pp[ctlxUECO][BCblVT4vUMIN] = (753 - 753);
                strcpy (pp[ctlxUECO], fqnPXC);
                if (ctlxUECO != sWL7TB - (485 - 484))
                    pp[ctlxUECO][J3hByjrcq7f0] = ' ';
            }
            ctlxUECO = ctlxUECO + (404 - 403);
        }
    }
    {
        ctlxUECO = (702 - 702);
        while (sWL7TB >= ctlxUECO) {
            printf ("%s", pp[ctlxUECO]);
            ctlxUECO = ctlxUECO + (123 - 122);
        }
    }
}

