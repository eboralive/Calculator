

#ifndef GTKMM_EXAMPLE_MAINGUI_H
#define GTKMM_EXAMPLE_MAINGUI_H

#include <gtkmm/button.h>
#include <gtkmm/fixed.h>
#include <gtkmm/window.h>
#include <gtkmm/entry.h>

class MainGui : public Gtk::Window
{

public:
  MainGui();
  virtual ~MainGui();

protected:
  //Signal handlers:

  void on_button_clicked(int num);

  void SetupButton(Gtk::Button* abutton, int buttonNum,int x, int y);

  //Member widgets:
  Gtk::Fixed m_fixed;
  Gtk::Entry m_entry;
  Gtk::Button m_button0;
  Gtk::Button m_button1;
  Gtk::Button m_button2;
  Gtk::Button m_button3;
  Gtk::Button m_button4;
  Gtk::Button m_button5;
  Gtk::Button m_button6;
  Gtk::Button m_button7;
  Gtk::Button m_button8;
  Gtk::Button m_button9;
};

#endif
