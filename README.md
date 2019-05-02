# Patient-Doctor-Assignment
<h2>Learning objectives</h2>

<ul>
<li>Model a real world interaction using OOP</li>
<li>Practice encapsulation</li>
</ul>

<h2>Introduction</h2>

<p>We will be using simple OOP to model interaction between a doctor and their patient. There are many ways to meet the requirements of the assignment, so think about the problem and how it would best be modeled. Consider sketching out the interactions and properties on a whiteboard.</p>

        <div class="callout callout-info">
          <div class="callout-icon" >
        <span class="fa-stack">
          <i class="fa fa-circle-o fa-stack-2x"></i>
          <i class="fa fa-info fa-stack-1x"></i>
        </span>
      </div>
          <div class="callout-body">
            

<p>Use <code>NSLog</code> to help you get visibility into and understand the flow of messages as these two classes communicate with each other.</p>

          </div>
        </div>
      
<h2>Assignment</h2>

        <div class="callout callout-instruction">
          <div class="callout-icon" >
        <span class="fa-stack">
          <i class="fa fa-code fa-stack-2x"></i>
        </span>
      </div>
          <div class="callout-body">
            

<p>Create a new command-line Objective-C project.</p>

          </div>
        </div>
      
<h3>Task 1 - Setup &amp; General Information</h3>

        <div class="callout callout-instruction">
          <div class="callout-icon" >
        <span class="fa-stack">
          <i class="fa fa-code fa-stack-2x"></i>
        </span>
      </div>
          <div class="callout-body">
            

<p>Create two classes <code>Doctor</code> and <code>Patient</code>. </p>

          </div>
        </div>
      
<p>Think about how instances of doctors and patients should be constructed. What general information for each of them need to be initialized?</p>

<ul>
<li>The doctor should be able to ask the patient for some general information about them (age and name for example). </li>
<li>The patient should be able to ask the doctor their name and specialization.</li>
</ul>

        <div class="callout callout-instruction">
          <div class="callout-icon" >
        <span class="fa-stack">
          <i class="fa fa-code fa-stack-2x"></i>
        </span>
      </div>
          <div class="callout-body">
            

<ul>
<li>Add properties to the <code>Doctor</code> and <code>Patient</code> classes to be able to store these bits of information.</li>
<li>Create custom initializers for both the <code>Doctor</code> and <code>Patient</code> to setup these properties.</li>
</ul>

          </div>
        </div>
      
<p>Custom initializers are useful for many reason. They allow cleaner creation of objects, <em>and</em> they give other coders information about how the objects should be used.</p>

<h3>Task 2 - Visiting a Doctor</h3>

<p>A patient should be able to visit a doctor, but in order for the doctor to accept the patient, the patient must have a valid health card. When the patient visits the doctor the doctor will ask them if they have a health card. If the answer is no, then the doctor cannot accept the patient. If they answer is yes, then the patient is accepted. </p>

        <div class="callout callout-instruction">
          <div class="callout-icon" >
        <span class="fa-stack">
          <i class="fa fa-code fa-stack-2x"></i>
        </span>
      </div>
          <div class="callout-body">
            

<ul>
<li>Create a method on the <code>Doctor</code> class that allows a patient to <code>visit</code> the doctor</li>
<li>If the patient has a health card, make sure the <code>Doctor</code> keeps track of them. </li>
</ul>

          </div>
        </div>
      
<p>Think about which collection type is best suited to keeping track of patients.</p>

<h3>Task 3 - Treating a Patient</h3>

<p>A patient can request medication from the doctor. This can be done by calling <code>requestMedicationForPatient:</code> on the doctor instance. Only patients previously accepted by that doctor can ask for prescriptions. In order for the doctor to create and return a prescription to the patient, the doctor needs to know what symptoms the patient is currently experiencing. This will affect what is prescribed.</p>

        <div class="callout callout-instruction">
          <div class="callout-icon" >
        <span class="fa-stack">
          <i class="fa fa-code fa-stack-2x"></i>
        </span>
      </div>
          <div class="callout-body">
            

<ul>
<li>Add a property to the <code>Patient</code> to keep track of the patient&#39;s symptoms.</li>
<li>Create a method on the <code>Doctor</code> class called <code>requestMedicationForPatient:</code> that accepts a patient and returns a prescription.</li>
<li>If the patient has already been accepted, create a new prescription based on that patient&#39;s symptoms.</li>
</ul>

          </div>
        </div>
      
<p>You can be as creative as you want when adding symptoms to the patient or creating prescriptions for those symptoms. </p>

<p><em>Suggestion: While you could keep things simple and not define any other classes to accomplish this, you may want to consider what other objects could be involved in this interaction. (<code>Symptom</code>, <code>Prescription</code>, etc)</em></p>

<h3>Task 4 - Prescriptions are Shared</h3>

<p>Even though a particular doctor writes prescriptions for their patients, a patient&#39;s doctor should be able to access any prescription that is ever written for that patient. While it&#39;s true that our health care system doesn&#39;t presently work this way, it should! Anyway, once the doctor writes the prescription, before returning it to the patient, the doctor should add it the collection of prescriptions written by any doctor. What type of collection is best suited to this problem?</p>

        <div class="callout callout-instruction">
          <div class="callout-icon" >
        <span class="fa-stack">
          <i class="fa fa-code fa-stack-2x"></i>
        </span>
      </div>
          <div class="callout-body">
            

<ul>
<li>Add each presecription to a collection of prescriptions that can be accessed by any <code>Doctor</code>.</li>
</ul>

          </div>
        </div>
      
<p><em>Tip: Since any other doctor can access these prescriptions, think about where this collection of prescriptions will be stored. As well, think about who should be able to read/change this information. In other words, should an instance of a patient be able to read/write this information? Ideally not!</em></p>

<h3>Task 5 - Modularity</h3>

<p>Clean encapsulation of a problem makes your classes modular. That means they can be easily swapped out for other classes that solve the same problem in a different way. Your coffee maker doesn&#39;t care what type of container is placed under it, as long as it meets the requirements (i.e. large enough to hold all the coffee, and short enought to fit under the spout).</p>

        <div class="callout callout-instruction">
          <div class="callout-icon" >
        <span class="fa-stack">
          <i class="fa fa-code fa-stack-2x"></i>
        </span>
      </div>
          <div class="callout-body">
            

<p>With that in mind, find another student who has reached this step and trade <code>Doctor</code> and <code>Patient</code> classes with them. Without modifying the classes, just your <code>main.m</code>, how much effort is needed to adapt their classes to your interaction. </p>

          </div>
        </div>
      
<p>Try to avoid reading the <code>.m</code> files and instead use the header files as &quot;documentation&quot; of how the objects work.</p>






