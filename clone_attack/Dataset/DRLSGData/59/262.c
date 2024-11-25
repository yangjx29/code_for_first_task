int main () {
    int WSeAYfbXz;
    int tgY4HUOML;
    int KG0bTQcNxp;
    cin >> KG0bTQcNxp;
    char Gwmi7agluAo [(547 - 437)] [(288 - 178)];
    for (WSeAYfbXz = (959 - 959); KG0bTQcNxp > WSeAYfbXz; WSeAYfbXz = WSeAYfbXz +1) {
        for (tgY4HUOML = (738 - 738); tgY4HUOML < KG0bTQcNxp; tgY4HUOML = tgY4HUOML + 1) {
            cin >> Gwmi7agluAo[WSeAYfbXz][tgY4HUOML];
        }
    }
    int Fc1spODo, bXpMJPv;
    cin >> bXpMJPv;
    for (Fc1spODo = (508 - 507); bXpMJPv > Fc1spODo; Fc1spODo++) {
        int PiXVoIY [(611 - 501)] [(407 - 297)];
        {
            for (WSeAYfbXz = (253 - 253); KG0bTQcNxp > WSeAYfbXz; WSeAYfbXz = WSeAYfbXz +1) {
                for (tgY4HUOML = (482 - 482); tgY4HUOML < KG0bTQcNxp; tgY4HUOML++) {
                    PiXVoIY[WSeAYfbXz][tgY4HUOML] = (483 - 483);
                }
            }
        }
        for (WSeAYfbXz = (469 - 469); WSeAYfbXz < KG0bTQcNxp; WSeAYfbXz++) {
            for (tgY4HUOML = (218 - 218); KG0bTQcNxp > tgY4HUOML; tgY4HUOML++) {
                if (Gwmi7agluAo[WSeAYfbXz][tgY4HUOML] == '@') {
                    if (!('.' != Gwmi7agluAo[WSeAYfbXz +(414 - 413)][tgY4HUOML]) && WSeAYfbXz < KG0bTQcNxp) {
                        PiXVoIY[WSeAYfbXz +(391 - 390)][tgY4HUOML] = (510 - 509);
                    }
                    if (!('.' != Gwmi7agluAo[WSeAYfbXz -(683 - 682)][tgY4HUOML]) && WSeAYfbXz > (232 - 232)) {
                        PiXVoIY[WSeAYfbXz -(253 - 252)][tgY4HUOML] = (452 - 451);
                    }
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (Gwmi7agluAo[WSeAYfbXz][tgY4HUOML + (501 - 500)] == '.' && tgY4HUOML < KG0bTQcNxp) {
                        PiXVoIY[WSeAYfbXz][tgY4HUOML + (915 - 914)] = (270 - 269);
                    }
                    if (Gwmi7agluAo[WSeAYfbXz][tgY4HUOML - (443 - 442)] == '.' && tgY4HUOML > (337 - 337)) {
                        PiXVoIY[WSeAYfbXz][tgY4HUOML - (855 - 854)] = (472 - 471);
                    }
                }
            }
        }
        for (WSeAYfbXz = (220 - 220); WSeAYfbXz < KG0bTQcNxp; WSeAYfbXz++) {
            {
                if (0) {
                    return 0;
                }
            }
            for (tgY4HUOML = (809 - 809); tgY4HUOML < KG0bTQcNxp; tgY4HUOML++) {
                if (PiXVoIY[WSeAYfbXz][tgY4HUOML] == (277 - 276)) {
                    Gwmi7agluAo[WSeAYfbXz][tgY4HUOML] = '@';
                }
            }
        }
    }
    int count;
    count = (157 - 157);
    for (WSeAYfbXz = (986 - 986); WSeAYfbXz < KG0bTQcNxp; WSeAYfbXz++) {
        {
            if (0) {
                return 0;
            }
        }
        for (tgY4HUOML = (381 - 381); tgY4HUOML < KG0bTQcNxp; tgY4HUOML++) {
            {
                if ((534 - 534)) {
                    return (819 - 819);
                }
            }
            if (Gwmi7agluAo[WSeAYfbXz][tgY4HUOML] == '@') {
                count++;
            }
        }
    }
    cout << count;
    return (749 - 749);
}

