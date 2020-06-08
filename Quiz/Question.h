#pragma once
#include <string>
#include <list>
#include "QuizForm.h"

using namespace std;

public class Question 
{
	public:string question;
	public:string* answers;
	public:string correct_answer;
	public:list<Question> questionList;
	public:string  control_element;

	public: Question(string question, string answers[], string correct_answer, string control_element)
	{
		this->question = question;
		this->answers = answers;
		this->correct_answer = correct_answer;
		this->control_element = control_element;
	
	}
	public: Question GetFrontQuestion()
	{
		return questionList.front();
	}

	public: void DelFrontQuestion()
	{
		questionList.pop_front();
	}

	public: Question()
	{
	}

	public: bool EmptyQuestion()
	{
		return questionList.empty();
	}

	public: int SizeQuestion()
	{
		int k = 0;
		for (const auto& item : questionList)
		{
			k++;
		}
		return k;
	}

	public: void ClearQuestion()
	{
		questionList.clear();
	}

	public: void QuestionFilling()
	{
		//TextBox
		questionList.push_back(Question("Кто я?", new string[4]{ "Максим","ыав","ывпф","ывап" }, "Максим","TextBox"));
		questionList.push_back(Question("Как зовут?", new string[4]{ "Иорфыаы","ываыв","ываыв","+" }, "+", "TextBox"));
		//checkBox
		questionList.push_back(Question("Кто я?", new string[4]{ "Максим","ыав","ывпф","ывап" }, "0", "checkBox"));
		questionList.push_back(Question("Как зовут?", new string[4]{ "Иорфыаы","ываыв","ываыв","+" }, "0", "checkBox"));
		//radioButton
		questionList.push_back(Question("Кто я?", new string[4]{ "Максим","ыав","ывпф","ывап" }, "0", "radioButton"));
		questionList.push_back(Question("Как зовут?", new string[4]{ "Иорфыаы","ываыв","ываыв","+" }, "0", "radioButton"));
		//checkedListBox
		questionList.push_back(Question("Кто я?", new string[4]{ "Максим","ыав","ывпф","ывап" }, "0", "checkedListBox"));
		questionList.push_back(Question("Как зовут?", new string[4]{ "Иорфыаы","ываыв","ываыв","+" }, "0", "checkedListBox"));
		//hScrollBar
		questionList.push_back(Question("Кто я?", new string[4]{ "Максим","ыав","ывпф","ывап" }, "Максим", "hScrollBar"));
		questionList.push_back(Question("Как зовут?", new string[4]{ "Иорфыаы","ываыв","ываыв","+" }, "+", "hScrollBar"));
		//comboBox
		questionList.push_back(Question("Кто я?", new string[4]{ "Максим","ыав","ывпф","ывап" }, "Максим", "comboBox"));
		questionList.push_back(Question("Как зовут?", new string[4]{ "Иорфыаы","ываыв","ываыв","+" }, "+", "comboBox"));
		//listBox
		//questionList.push_back(Question("Кто я?", new string[4]{ "Максим","ыав","ывпф","ывап" }, "Максим", "listBox"));
		//questionList.push_back(Question("Как зовут?", new string[4]{ "Иорфыаы","ываыв","ываыв","+" }, "+", "listBox"));
		//trackBar
		questionList.push_back(Question("Кто я?", new string[4]{ "Максим","ыав","ывпф","ывап" }, "Максим", "trackBar"));
		questionList.push_back(Question("Как зовут?", new string[4]{ "Иорфыаы","ываыв","ываыв","+" }, "+", "trackBar"));
	}

};