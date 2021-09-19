#include "Swarm.h"

namespace dzrnic {

Swarm::Swarm() {
        m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
        delete [] m_pParticles;
}

} /* namespace dzrnic */
