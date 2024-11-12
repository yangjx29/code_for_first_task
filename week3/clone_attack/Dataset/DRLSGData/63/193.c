int main () {
    int DrGIWi5lt;
    int hqczraKjEsp;
    int uX9AiT, ySGM36iqIFx8;
    int icPMIvyhT1n [(756 - 655)] [(1026 - 925)];
    int sAr0xB7oXtVL [(818 - 717)] [(763 - 662)];
    int j1McvD [(784 - 683)] [(657 - 556)];
    int AGl9fQJ7iA;
    int swxSu4V;
    int H5HBPY;
    for (AGl9fQJ7iA = (160 - 160); 101 > AGl9fQJ7iA; AGl9fQJ7iA = AGl9fQJ7iA +1) {
        for (swxSu4V = (752 - 752); swxSu4V < 101; swxSu4V = swxSu4V + 1) {
            icPMIvyhT1n[AGl9fQJ7iA][swxSu4V] = (115 - 115);
            sAr0xB7oXtVL[AGl9fQJ7iA][swxSu4V] = (882 - 882);
            j1McvD[AGl9fQJ7iA][swxSu4V] = (800 - 800);
        }
    }
    cin >> DrGIWi5lt >> hqczraKjEsp;
    for (AGl9fQJ7iA = (482 - 482); DrGIWi5lt > AGl9fQJ7iA; AGl9fQJ7iA = AGl9fQJ7iA +1) {
        swxSu4V = 551 - 551;
        while (swxSu4V < hqczraKjEsp) {
            cin >> icPMIvyhT1n[AGl9fQJ7iA][swxSu4V];
            swxSu4V = swxSu4V + 1;
        }
    }
    cin >> uX9AiT >> ySGM36iqIFx8;
    for (AGl9fQJ7iA = (889 - 889); AGl9fQJ7iA < uX9AiT; AGl9fQJ7iA = AGl9fQJ7iA +1) {
        swxSu4V = 695 - 695;
        while (ySGM36iqIFx8 > swxSu4V) {
            cin >> sAr0xB7oXtVL[AGl9fQJ7iA][swxSu4V];
            swxSu4V = swxSu4V + 1;
        }
    }
    {
        AGl9fQJ7iA = 774 - 774;
        while (DrGIWi5lt > AGl9fQJ7iA) {
            {
                swxSu4V = 0;
                while (swxSu4V < ySGM36iqIFx8) {
                    for (H5HBPY = 0; hqczraKjEsp > H5HBPY; H5HBPY = H5HBPY +1) {
                        j1McvD[AGl9fQJ7iA][swxSu4V] = j1McvD[AGl9fQJ7iA][swxSu4V] + icPMIvyhT1n[AGl9fQJ7iA][H5HBPY] * sAr0xB7oXtVL[H5HBPY][swxSu4V];
                    }
                    swxSu4V = swxSu4V + 1;
                }
            }
            AGl9fQJ7iA = AGl9fQJ7iA +1;
        }
    }
    {
        AGl9fQJ7iA = 0;
        while (DrGIWi5lt > AGl9fQJ7iA) {
            {
                swxSu4V = 0;
                while (swxSu4V < ySGM36iqIFx8) {
                    if ((swxSu4V + (59 - 58)) % ySGM36iqIFx8 != 0) {
                        cout << j1McvD[AGl9fQJ7iA][swxSu4V] << " ";
                    }
                    else {
                        cout << j1McvD[AGl9fQJ7iA][swxSu4V] << endl;
                    }
                    swxSu4V = swxSu4V + 1;
                }
            }
            AGl9fQJ7iA = AGl9fQJ7iA +1;
        }
    }
    return 0;
}

