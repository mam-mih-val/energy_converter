## Building 
Follow the instructions above
    $ git clone https://github.com/mam-mih-val/energy_converter
    $ cd energy convertesr
    $ mkdir build
    $ cd build
    $ cmake ..
    $ make
    
## Usage
To convert kinetical energy in lab-system to CMS, run
    $ ./lab_to_cms [enery]
Where [energy] is your kinetic energy value

To convert CMS  $\sqrt{S_{NN}$ to laboratory kinetic energy, act simmilary
    $ ./cms_to_lab [energy]
