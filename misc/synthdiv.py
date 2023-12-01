class Term:
    def __init__(self, string):
        self.coef, self.exp = map(int, string.split('x'))
    def __repr__(self):
        return str(self.coef) + 'x^' + str(self.exp)
class Equation:
    def __init__(self, vals):
        if len(vals) == 0:
            return
        self.vals = vals
        self.terms = []
        for v in vals:
            self.terms.append(Term(v))
        self.terms.sort(key = lambda a : -a.exp)
        self.degree = self.terms[0].exp


def SynthDiv(eq1, eq2):
    l1 = []
        
firstEq = Equation(input("Enter numerator: ").split())
secondEq = Equation(input("Enter denominator: ").split())
