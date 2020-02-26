
namespace Index {
    bool uncovered_if(bool a = true) {
        if (a)
            return false;
        else
            return true;   
    }

    bool fully_covered() {
        return true;
    }

    bool uncovered() {
        return true;
    }
}