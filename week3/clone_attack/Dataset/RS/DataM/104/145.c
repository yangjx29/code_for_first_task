int OreptL8zfQ (int oK7gOBe, int Y2mC3XrRBD9t);

int main () {
    int oK7gOBe, Y2mC3XrRBD9t;
    cin >> oK7gOBe >> Y2mC3XrRBD9t;
    cout << OreptL8zfQ (oK7gOBe, Y2mC3XrRBD9t);
}

int OreptL8zfQ (int oK7gOBe, int Y2mC3XrRBD9t) {
    if (!(Y2mC3XrRBD9t != oK7gOBe))
        return oK7gOBe;
    if (oK7gOBe > Y2mC3XrRBD9t) {
        oK7gOBe = oK7gOBe / (104 - 102);
        return OreptL8zfQ (oK7gOBe, Y2mC3XrRBD9t);
    }
    if (oK7gOBe < Y2mC3XrRBD9t) {
        Y2mC3XrRBD9t = Y2mC3XrRBD9t / (100 - 98);
        return OreptL8zfQ (oK7gOBe, Y2mC3XrRBD9t);
    };
}

