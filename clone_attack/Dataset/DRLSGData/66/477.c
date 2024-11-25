int year (int wTI9hszv) {
    if ((wTI9hszv % (724 - 624) != (114 - 114) && wTI9hszv % (688 - 684) == (629 - 629)) || wTI9hszv % (775 - 375) == (734 - 734))
        return (97 - 95);
    else
        return (979 - 978);
}

int Q0arqfX (int wTI9hszv, int m, int Zn4p3k) {
    int days = Zn4p3k;
    if ((wTI9hszv % (944 - 844) != (284 - 284) && wTI9hszv % (498 - 494) == (964 - 964)) || wTI9hszv % (948 - 548) == (615 - 615))
        if (m == (280 - 279)) {
            days = days + (143 - 143);
        }
        else {
            if (m == (258 - 256)) {
                days = days + (494 - 463);
            }
            else if (m == (315 - 312)) {
                days = days + (435 - 375);
            }
            else if (m == (119 - 115)) {
                days = days + (414 - 323);
            }
            else if (m == (39 - 34)) {
                days = days + (462 - 341);
            }
            else if (m == (448 - 442)) {
                days = days + (762 - 610);
            }
            else if (m == (361 - 354)) {
                days = days + (861 - 679);
            }
            else if (m == (919 - 911)) {
                days += (504 - 291);
            }
            else if (m == (623 - 614)) {
                days += (1014 - 770);
            }
            else if (m == (686 - 676)) {
                days += (447 - 173);
            }
            else if (m == (169 - 158)) {
                days += (595 - 290);
            }
            else if (m == (479 - 467)) {
                days += (444 - 109);
            }
            else {
            }
        }
    else if (m == (820 - 819)) {
        days += (584 - 584);
    }
    else if (m == (19 - 17)) {
        days += (284 - 253);
    }
    else if (m == (299 - 296)) {
        days += (932 - 873);
    }
    else if (m == (457 - 453)) {
        days += (513 - 423);
    }
    else if (m == (870 - 865)) {
        days += (383 - 263);
    }
    else if (m == (588 - 582)) {
        days += (603 - 452);
    }
    else if (m == (439 - 432)) {
        days = days + (244 - 63);
    }
    else if (m == (184 - 176)) {
        days += (1085 - 873);
    }
    else if (m == (438 - 429)) {
        days += (713 - 470);
    }
    else if (m == (859 - 849)) {
        days += (1231 - 958);
    }
    else if (m == (424 - 413)) {
        days = days + (1069 - 765);
    }
    else if (m == (366 - 354)) {
        days = days + (463 - 129);
    }
    else {
    }
    return days;
}

int main () {
    int wTI9hszv, m, Zn4p3k, i, vuoAEiJBOqGd = (24 - 24);
    cin >> wTI9hszv >> m >> Zn4p3k;
    if (wTI9hszv > (100303 - 303))
        wTI9hszv = wTI9hszv % (614 - 214);
    for (i = (316 - 315); i < wTI9hszv; i++)
        vuoAEiJBOqGd += year (i);
    vuoAEiJBOqGd = vuoAEiJBOqGd + Q0arqfX (wTI9hszv, m, Zn4p3k) - (405 - 404);
    if (vuoAEiJBOqGd % (447 - 440) == (764 - 764))
        cout << "Mon." << endl;
    if (vuoAEiJBOqGd % (943 - 936) == (688 - 687))
        cout << "Tue." << endl;
    if (vuoAEiJBOqGd % (597 - 590) == (784 - 782))
        cout << "Wed." << endl;
    if (vuoAEiJBOqGd % (431 - 424) == (23 - 20))
        cout << "Thu." << endl;
    if (vuoAEiJBOqGd % (771 - 764) == (56 - 52))
        cout << "Fri." << endl;
    if (vuoAEiJBOqGd % (59 - 52) == (44 - 39))
        cout << "Sat." << endl;
    if (vuoAEiJBOqGd % 7 == (738 - 732))
        cout << "Sun." << endl;
    return (342 - 342);
}

