

#include "mainGui.h"
#include <iostream>
#include <string>
#include <sstream>


std::string entry_text;

MainGui::MainGui()
{

  this->set_default_size(400,300);

  SetupButton(&m_button1 ,1,1,40);
  SetupButton(&m_button2 ,2,50,40);
  SetupButton(&m_button3 ,3,100,40);
  SetupButton(&m_button4 ,4,1,70);
  SetupButton(&m_button5 ,5,50,70);
  SetupButton(&m_button6 ,6,100,70);
  SetupButton(&m_button7 ,7,1,100);
  SetupButton(&m_button8 ,8,50,100);
  SetupButton(&m_button9 ,9,100,100);
  SetupButton(&m_button0 ,0,1,130);
  //SetupButton(&m_button_dot ,0,50,130);


  m_fixed.show();

  m_fixed.put(m_entry,1,1);
  m_entry.show();

  this->add(m_fixed);

}

MainGui::~MainGui()
{
}


void MainGui::SetupButton(Gtk::Button* abutton, int buttonNum,int x, int y) 
{
  abutton->set_border_width(10);
  abutton->set_label(std::to_string(buttonNum));
  
  abutton->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &MainGui::on_button_clicked), buttonNum));

  m_fixed.put(*abutton, x, y);

  abutton->show();
}

void MainGui::on_button_clicked(int num)
{
  entry_text = entry_text + std::to_string(num);
  m_entry.set_text(entry_text);
}

