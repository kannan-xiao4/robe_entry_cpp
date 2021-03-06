#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Calculator
{
public:
    typedef int ValueType;
    void Run();

private:
    bool Input();
    bool Calculate();
    void ShowResult() const;

private:
    ValueType m_a, m_b;
    char m_op;
    ValueType m_result;
};

void Calculator::Run()
{
    while (Input())
    {
        if (Calculate())
        {
            ShowResult();
        }
    }
}

bool Calculator::Input()
{
    istringstream isstr;

    while (true)
    {
        string line;

        cout << "Input Formula > " << flush;
        getline(cin, line);

        if (cin.fail() || line.empty())
        {
            return false;
        }
        
        isstr.clear();
        isstr.str(line);
        isstr >> m_a >> m_op >> m_b;

        if (isstr.fail())
        {
            continue;
        }
        
        isstr >> line;

        if (isstr.fail())
        {
            break;
        }
        
    }
    
    return true;
}

bool Calculator::Calculate()
{
    switch (m_op)
    {
    case '+': 
        m_result = m_a + m_b;
        break;
    case '-': 
        m_result = m_a - m_b;
        break;
    case '*': 
        m_result = m_a * m_b;
        break;
    case '/':
        if (m_b == 0)
        {
            cerr << "can't divide 0." << endl;
            return false;
        }
        m_result = m_a / m_b;
        break;
    default:
        cerr << "invalid operator." << endl;
        return false;
    }
    return true;
}

void Calculator::ShowResult() const
{
    cout << m_result << endl;
}

int main()
{
    Calculator calc;
    calc.Run();
}